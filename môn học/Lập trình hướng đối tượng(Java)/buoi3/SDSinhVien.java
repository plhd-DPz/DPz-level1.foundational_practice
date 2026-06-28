package buoi3;

import buoi2.Date;

import java.util.Scanner;

public class SDSinhVien {

	public static void main(String[] args) {
		SinhVien a=new SinhVien();
		System.out.println("Nhap thong tin sinh vien a: ");
		a.nhap();
		a.in();
		System.out.println("Sinh vien a dang ki them mon LTHDT.");
		a.them("LTHDT");
		a.ganDiem("LTHDT", "A");
		System.out.println("Thong tin sinh vien a la: "+a);
		a.xoa("LTHDT");
		System.out.println("Thong tin sinh vien a sau khi xoa LTHDT: "+a);
		SinhVien ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so sinh vien trong danh sach: ");
		int n=sc.nextInt();
		ds=new SinhVien[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap sinh vien thu "+(i+1)+": ");
			ds[i]=new SinhVien();
			ds[i].nhap();
		}
		System.out.println("Danh sach sinh vien bi canh cao hoc vu: ");
		for (int i=0;i<n;i++) 
			if (ds[i].diemTB()<1) ds[i].in();
		System.out.println("Danh sach sinh vien co diem cao nhat: ");
		float max=ds[0].diemTB();
		for (int i=1;i<n;i++)
			if (ds[i].diemTB()>max) max=ds[i].diemTB();
		for (int i=0;i<n;i++)
			if (ds[i].diemTB()==max) ds[i].in();
		System.out.println("Sap xep danh sach sinh vien theo ten: ");
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if (ds[i].layTen().compareTo(ds[j].layTen())>0) {
					SinhVien t=ds[i];
					ds[i]=ds[j];
					ds[j]=t;
				}
			}
		}
		for (int i=0;i<n;i++) ds[i].in();
		int kha=0, gioi=0, xuatSac=0;
		for (int i = 0; i < n; i++) {
		    String xl = ds[i].xepLoai();
		    if (xl.equals("Kha"))
		        kha++;
		    else if (xl.equals("Gioi"))
		        gioi++;
		    else if (xl.equals("Xuat sac"))
		        xuatSac++;
		}
		System.out.println("So sinh vien kha: "+kha);
		System.out.println("So sinh vien gioi: "+gioi);
		System.out.println("So sinh vien xuat sac: "+xuatSac);
		sc.nextLine();
		System.out.print("Nhap ten can tim: ");
		String ten = sc.nextLine();
		for (int i = 0; i < n; i++) {
		    if (ds[i].layHoTen().equals(ten))
		        ds[i].in();
		}
		Date d = new Date();
		System.out.println("Nhap ngay sinh can tim:");
		d.nhap();
		for (int i = 0; i < n; i++) {
		    if (ds[i].layNgaySinh().equals(d))
		        ds[i].in();
		}
	}

}
