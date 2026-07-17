package buoi4;

import java.util.Scanner;

import buoi2.Diem;

public class SDDiemMau {

	public static void main(String[] args) {
		DiemMau a=new DiemMau(5,10,"trang");
		System.out.println("thong tin cua diem A cho truoc la: "+a);
		DiemMau b=new DiemMau();
		System.out.println("Nhap gia tri diem B: ");
		b.nhapDiem();
		System.out.println("Thong tin diem B da nhap la: "+b);
		b.doiDiem(10, 8);
		System.out.println("Thong tin diem B sau khi doi diem 1 khoang (10, 8) la: ");
		b.hienThi();
		b.ganMau("vang");
		System.out.println("Thong tin diem B sau khi doi mau la: "+b);
		Diem ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so luong diem: ");
		int n=sc.nextInt();
		ds=new Diem[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap thong tin mau thu "+(i+1)+": ");
			int c;
			System.out.print("Nhap Diem(1) hay DiemMau(2): ");
			c=sc.nextInt();
			if (c==1) ds[i]=new Diem();
			else ds[i]=new DiemMau();
			ds[i].nhapDiem();
		}
		System.out.println("Danh sach diem da nhap la: ");
		for (Diem e : ds) e.hienThi();
	}

}
