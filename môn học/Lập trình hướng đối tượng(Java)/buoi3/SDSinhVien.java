package buoi3;

import java.util.Scanner;

public class SDSinhVien {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		SinhVien a=new SinhVien();
		System.out.println("Nhap thong tin sinh vien a: ");
		a.nhap();
		System.out.println("Thong tin sinh vien a la: ");
		a.in();
		System.out.println("\nSinh vien a dang ki them mon LTHDT.");
		a.them("LTHDT");
		a.ganDiem("LTHDT", "A");
		System.out.println("Thong tin sinh vien a sau khi dang ki them mon LTHDT la: "+a+"\n");
		System.out.print("Nhap mon hoc sinh vien a can xoa: ");
		String x=sc.nextLine();
		a.xoa(x);
		System.out.println("Thong tin sinh vien a sau khi xoa mon "+x+" la: "+a);
		SinhVien ds[];
		System.out.print("Nhap so luong sinh vien trong danh sach: ");
		int n=sc.nextInt();
		ds=new SinhVien[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap thong tin sinh vien thu "+(i+1)+": ");
			ds[i]=new SinhVien();
			ds[i].nhap();
		}
		System.out.println("Danh sach cac sinh vien bi canh cao hoc vu: ");
		for (int i=0;i<n;i++)
			if (ds[i].diemTB()<1) ds[i].in();
		System.out.println("\nDanh sach sinh vien co diem trung binh cao nhat: ");
		float max=ds[0].diemTB();
		for (int i=1;i<n;i++)
			if (ds[i].diemTB()>max) max=ds[i].diemTB();
		for (int i=0;i<n;i++)
			if (ds[i].diemTB()==max) ds[i].in();
		System.out.println("\nSap xep cac sinh vien theo ten: ");
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if (ds[i].layTen().compareTo(ds[j].layTen())>0) {
					SinhVien t=ds[i];
					ds[i]=ds[j];
					ds[j]=t;
				}
			}
		}
		for (SinhVien e : ds) e.in();
		int kha=0, gioi=0, xuatSac=0;
		for (int i=0;i<n;i++) {
			String x1=ds[i].xepLoai();
			if (x1.equals("Xuat sac")) xuatSac++;
			else if (x1.equals("Gioi")) gioi++;
			else if (x1.equals("Kha")) kha++;
		}
		System.out.println("\nSo sinh vien kha trong danh sach: "+kha);
		System.out.println("So sinh vien gioi trong danh sach: "+gioi);
		System.out.println("So sinh vien xuat sac trong danh sach: "+xuatSac);
		System.out.println("\nTim kiem sinh vien theo ho ten: ");
		SinhVien.timTheoTen(ds, n);
		System.out.println("\nTim kiem sinh vien theo ngay sinh: ");
		SinhVien.timTheoNgaySinh(ds, n);
	}

}
