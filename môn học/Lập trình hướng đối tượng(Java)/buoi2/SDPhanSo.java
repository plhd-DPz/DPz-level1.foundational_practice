package buoi2;

import java.util.Scanner;

public class SDPhanSo {

	public static void main(String[] args) {
		PhanSo a=new PhanSo(3,7);
		System.out.println("Phan so a: "+a);
		PhanSo b=new PhanSo(4, 9);
		System.out.println("Phan so b: "+b);
		PhanSo x=new PhanSo();
		System.out.println("Nhap phan so x: ");
		x.nhap();
		PhanSo y=new PhanSo();
		System.out.println("Nhap phan so y: ");
		y.nhap();
		System.out.println("Gia tri nghich dao cua phan so x(neu co): "+x.giaTriNghichDao());
		System.out.println("Tong cua phan so x va y la: "+x.cong(y));
		PhanSo ds[];
		Scanner sc=new Scanner(System.in);
		System.out.println("Nhap so phan tu: ");
		int n=sc.nextInt();
		ds=new PhanSo[n];
		for (int i=0;i<n;i++) {
			ds[i]=new PhanSo();
			System.out.println("Nhap phan so thu "+(i+1)+": ");
			ds[i].nhap();
		}
		PhanSo max=ds[0];
		PhanSo tong=ds[0];
		for (int i=1;i<n;i++) {
			tong=tong.cong(ds[i]);
			if (max.giaTriThuc()<ds[i].giaTriThuc()) max=ds[i];
		}
		System.out.println("Tong cac phan so la: "+tong);
		System.out.println("Phan so lon nhat la: "+max);
		for (int i=0;i<n-1;i++) {
		    for (int j=i+1;j<n;j++) {
		        if (ds[i].giaTriThuc() > ds[j].giaTriThuc()) {
		            PhanSo temp=ds[i];
		            ds[i]=ds[j];
		            ds[j]=temp;
		        }
		    }
		}
		System.out.println("Danh sach phan so sau khi sap xep: ");
		for (PhanSo e : ds) {
			e.in();
		}
	}

}
