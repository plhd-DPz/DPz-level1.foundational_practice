package buoi3;

import java.util.Scanner;

public class Gach {
	private String mSo, mau;
	private int sl, cd, cn;
	private long gia;
	public Gach() {
		mSo=new String();
		mau=new String();
		sl=0;
		cd=0;
		cn=0;
		gia=0;
	}
	public Gach(Gach g) {
		mSo=new String(g.mSo);
		mau=new String(g.mau);
		sl=g.sl;
		cd=g.cd;
		cn=g.cn;
		gia=g.gia;
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap ma so: ");
		mSo=sc.nextLine();
		System.out.print("Nhap mau: ");
		mau=sc.nextLine();
		System.out.print("Nhap so luong: ");
		sl=sc.nextInt();
		System.out.print("Nhap chieu dai: ");
		cd=sc.nextInt();
		System.out.print("Nhap chieu ngang: ");
		cn=sc.nextInt();
		System.out.print("Nhap gia: ");
		gia=sc.nextLong();
	}
	 public void in() {
	        System.out.println(toString());
	    }
	 public String toString() {
        return "Ma so: "+mSo+", Mau: "+mau+", So luong: "+sl+", Kich thuoc: "+cd+"x"+cn+", Gia hop: "+gia;
	 }
	 public long layGia() {
		 return gia;
	 }
    public float giaBanLe() {
    	float giaVien=(float)gia/sl;
    	return giaVien*1.2f;
    }
    public int dtVien() {
    	return cd*cn;
    }
    public int dtToiDa() {
    	return sl*dtVien();
    }
    public int soLuongHop(int d, int n) {
    	int dtNen=d*n;
    	int dtHop=dtToiDa();
    	int kq=dtNen/dtHop;
    	if (dtNen%dtHop!=0) kq++;
    	return kq;
    }
}
