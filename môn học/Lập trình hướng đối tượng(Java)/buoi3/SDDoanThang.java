package buoi3;

import java.util.Scanner;

import buoi2.Diem;

public class SDDoanThang {

	public static void main(String[] args) throws CloneNotSupportedException {
		DoanThang dt1=new DoanThang();
		System.out.println("Nhap toa do doan thang: ");
		dt1.nhap();
		System.out.print("\nDoan thang da nhap la: ");
		dt1.in();
		DoanThang dt2=new DoanThang(new Diem(2,5), new Diem(20,35));
		DoanThang dt3=new DoanThang(dt2);
		System.out.println("\nDoan thang AB la: "+dt3);
		DoanThang dt4=(DoanThang)dt3.clone();
		dt4.tinhTien(5,3);
		System.out.println("Doan thang AB sau khi tinh tien la: "+dt4);
		DoanThang dt5=new DoanThang();
		System.out.println("Nhap toa do doan thang CD: ");
		dt1.nhap();
		dt5.gan(dt1);
		System.out.println("\nDo dai doan thang CD la: "+dt5.doDai());
		System.out.println("Goc cua CD voi truc hoanh la: "+dt5.goc());
		DoanThang ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so phan tu trong mang: ");
		int n=sc.nextInt();
		ds=new DoanThang[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap phan tu thu "+(i+1)+": ");
			ds[i]=new DoanThang();
			ds[i].nhap();
		}
		System.out.println("Danh sach vua nhap: ");
		for (DoanThang e : ds) e.in();
	}

}
