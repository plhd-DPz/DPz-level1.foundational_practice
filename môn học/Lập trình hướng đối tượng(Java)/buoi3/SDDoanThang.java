package buoi3;

import java.util.Scanner;

import buoi2.Diem;

public class SDDoanThang {

	public static void main(String[] args) {
		Diem a=new Diem(2,5);
		Diem b=new Diem(20,35);
		DoanThang ab=new DoanThang(a,b);
		System.out.println("Doan thang AB da cho la: "+ab);
		ab.tinhTien(5, 3);
		System.out.println("Doan thang AB sau khi tinh tien la: "+ab);
		DoanThang dt1=new DoanThang();
		System.out.println("Nhap toa do doan thang CD: ");
		dt1.nhap();
		DoanThang dt2=new DoanThang(dt1);     //test cac ham sao chep
		DoanThang cd=new DoanThang();
		cd.gan(dt2);
		System.out.print("Doan thang da nhap la: ");
		cd.in();
		System.out.println("\nDo dai doan thang CD la: "+cd.doDai());
		System.out.println("Goc cua CD voi truc hoanh la: "+cd.goc());
		DoanThang ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so doan thang trong danh sach: ");
		int n=sc.nextInt();
		ds=new DoanThang[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap doan thang thu "+(i+1)+": ");
			ds[i]=new DoanThang();
			ds[i].nhap();
		}
		
		System.out.println("Danh sach cac doan thang vua nhap la: ");
		for (DoanThang e : ds) e.in();
	}

}
