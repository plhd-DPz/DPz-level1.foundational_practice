package buoi2;

import java.util.Scanner;

public class SDDate {

	public static void main(String[] args) {
		Date a=new Date(8,6,2026);
		System.out.println("Ngay a: "+a);
		System.out.println(a + " la " + a.thu());
		Date b=new Date();
		b.nhap();
		b.in();
		System.out.println("ngay sau khi cong 32000 ngay: ");
		b=b.congNgay(32000);
		b.in();
		System.out.println("125 ngay sau 8/6/2026 la " + a.thu(125));
		Date ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so phan tu cho mang cac ngay: ");
		int n=sc.nextInt();
		ds=new Date[n];
		for (int i=0;i<n;i++) {
			ds[i]=new Date();
			System.out.println("Nhap ngay thu "+(i+1)+": ");
			ds[i].nhap();
		}
		for (Date e : ds) e.in();
		Date moc=new Date(8,3,2026);
		System.out.println("Cac ngay truoc "+moc.layNgay()+"/"+moc.layThang()+"/"+moc.layNam()+": ");
		for (Date e : ds) {
			if (e.ngayTruoc(moc)) e.in();
		}
		for (int i = 1; i <= 12; i++) {
		    Date thang = new Date(1, i, 2027);
		    thang.inThang();
		}
	}

}
