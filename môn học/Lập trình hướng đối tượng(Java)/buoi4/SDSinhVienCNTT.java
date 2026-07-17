package buoi4;

import java.util.Scanner;

import buoi3.SinhVien;

public class SDSinhVienCNTT {

	public static void main(String[] args) {
		SinhVienCNTT s=new SinhVienCNTT();
		System.out.println("Nhap thong tin sinh vien test: ");
		s.nhap();
		System.out.println("Thong tin sinh vien vua nhap la: ");
		s.in();
		SinhVien ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so luong sinh vien CNTT trong danh sach: ");
		int n=sc.nextInt();
		sc.nextLine();
		ds=new SinhVien[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap thong tin sinh vien thu "+(i+1)+": ");
			ds[i]=new SinhVienCNTT();
			ds[i].nhap();
		}
		System.out.println("Danh sach sinh vien vua nhap: ");
		for (SinhVien e : ds) e.in();
		System.out.print("Nhap email sinh vien can tim: ");
		String email=sc.nextLine();
		int f=0;
		for (SinhVien sv : ds) {
			if (sv.layEmail().equals(email)) {
				System.out.println("Ket qua hoc tap cua sinh vien can tim: "+sv.diemTB());
				f=1;
				break;
			}
		}
		if (f==0) System.out.println("Khong tim thay sinh vien voi email da nhap!");
		int kha=0, gioi=0;
		for (SinhVien sv : ds) {
			if (sv.xepLoai().equals("Gioi")) gioi++;
			else if (sv.xepLoai().equals("Kha")) kha++;
		}
		System.out.println("So luong sinh vien gioi la: "+gioi+", so luong sinh vien kha la: "+kha);
		System.out.println("Sap xep sinh vien theo diem trung binh tu lon den be: ");
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if (ds[i].diemTB()<ds[j].diemTB()) {
					SinhVien t=ds[i];
					ds[i]=ds[j];
					ds[j]=t;
				}
			}
		}
		for (SinhVien e : ds) e.in();
	}

}
