package buoi2;

import java.util.Scanner;

public class PhanSo {
	private int tuSo, mauSo;
	public PhanSo() {
		tuSo=0;
		mauSo=1;
	}
	public PhanSo(int tuSo1, int mauSo1) {
		if (mauSo1==0) {
			System.out.println("Mau so khong hop le.");
			tuSo=0;
			mauSo=1;
		}
		else {
			tuSo=tuSo1;
			mauSo=mauSo1;
		}
	}
	public PhanSo(PhanSo a) {
		tuSo=a.tuSo;
		mauSo=a.mauSo;
	}
	public void in() {
		if (tuSo==0) System.out.println("0\n");
		else if (mauSo==1) System.out.println(tuSo);
		else {
			if(tuSo*mauSo < 0) System.out.println(Math.abs(tuSo)+"/"+Math.abs(mauSo));
			else System.out.println(Math.abs(tuSo)+"/"+Math.abs(mauSo));
		}
	}
	public String toString() {
		if (tuSo==0) return "0\n";
		else if (mauSo==1) return String.valueOf(tuSo);
		else {
			if(tuSo*mauSo < 0) return Math.abs(tuSo)+"/"+Math.abs(mauSo);
			else return Math.abs(tuSo)+"/"+Math.abs(mauSo);
		}
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		do {
			System.out.print("Nhap tu so: ");
			tuSo=sc.nextInt();
			System.out.print("Nhap mau so: ");
			mauSo=sc.nextInt();
			if (mauSo==0) System.out.println("Mau so phai khac 0, hay nhap lai: ");
		}while(mauSo==0);
	}
	public void nghichDao() {
		if (tuSo==0) {
			System.out.println("Khong the nghich dao vi tu so bang 0.");
			return;
		}
		int temp=tuSo;
		tuSo=mauSo;
		mauSo=temp;
	}
	public PhanSo giaTriNghichDao() {
		if (tuSo==0) {
			System.out.println("Khong the nghich dao vi tu so bang 0.");
			return new PhanSo(this);
		}
		PhanSo a=new PhanSo();
		a.tuSo=mauSo;
		a.mauSo=tuSo;	
		return a;
	}
	public float giaTriThuc() {
		return tuSo/(float)mauSo;
	}
	public boolean lonHon(PhanSo a) {
		if (tuSo/(float)mauSo > a.tuSo/(float)a.mauSo) return true;
		else return false;
	}
	public int gcd(int x, int y) {
	    while (y != 0) {
	        int r = x % y;
	        x = y;
	        y = r;
	    }
	    return Math.abs(x);
	}
	public int mauSoChungNhoNhat(PhanSo a) {
		int x=mauSo, y=a.mauSo;
		return x / gcd(x, y) * y;
	}
	public void rutGon() {
	    int g = gcd(Math.abs(tuSo), Math.abs(mauSo));
	    tuSo /= g;
	    mauSo /= g;
	}
	public PhanSo cong(PhanSo a) {
		PhanSo t=new PhanSo();
		t.mauSo=mauSoChungNhoNhat(a);
		t.tuSo=tuSo*(t.mauSo/mauSo)+a.tuSo*(t.mauSo/a.mauSo);
		//t.rutGon();
		return t;
	}
	public PhanSo tru(PhanSo a) {
		PhanSo t=new PhanSo();
		t.mauSo=mauSoChungNhoNhat(a);
		t.tuSo=tuSo*(t.mauSo/mauSo)-a.tuSo*(t.mauSo/a.mauSo);
		//t.rutGon();
		return t;
	}
	public PhanSo nhan(PhanSo a) {
		PhanSo t=new PhanSo();
		t.tuSo=tuSo*a.tuSo;
		t.mauSo=mauSo*a.mauSo;
		//t.rutGon();
		return t;
	}
	public PhanSo chia(PhanSo a) {
		if (a.tuSo == 0) {
		    System.out.println("Khong the chia cho 0");
		    return new PhanSo(this);
		}
		return nhan(a.giaTriNghichDao());
	}
}
