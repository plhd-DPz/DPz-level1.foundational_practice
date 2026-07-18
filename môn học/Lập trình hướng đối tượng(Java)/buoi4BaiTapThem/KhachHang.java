package buoi4BaiTapThem;

import java.util.Scanner;

import buoi2.Date;

public abstract class KhachHang {
	private String maKH, hoTen;
	private Date ngaySinh;
	private String gioiTinh, sdt, maCongTo;
	
	public KhachHang() {
		maKH=new String();
		hoTen=new String();
		ngaySinh=new Date();
		gioiTinh=new String();
		sdt=new String();
		maCongTo=new String();
	}
	public KhachHang(KhachHang k) {
		maKH=new String(k.maKH);
		hoTen=new String(k.hoTen);
		ngaySinh=new Date(k.ngaySinh);
		gioiTinh=new String(k.gioiTinh);
		sdt=new String(k.sdt);
		maCongTo=new String(k.maCongTo);
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap ma khach hang: ");
		maKH=sc.nextLine();
		System.out.print("Nhap ho ten: ");
		hoTen=sc.nextLine();
		System.out.println("Nhap ngay sinh: ");
		ngaySinh.nhap();
		System.out.print("Nhap gioi tinh: ");
		gioiTinh=sc.nextLine();
		System.out.print("Nhap so dien thoai: ");
		sdt=sc.nextLine();
		System.out.print("Nhap ma so cong to: ");
		maCongTo=sc.nextLine();
	}
	public void in() {
		System.out.println("["+maKH+", "+hoTen+", "+ngaySinh+", "+gioiTinh+", "+sdt+", "+maCongTo+"]");
	}
	public String toString() {
		return "["+maKH+", "+hoTen+", "+ngaySinh+", "+gioiTinh+", "+sdt+", "+maCongTo+"]";
	}
	
	public abstract double tinhTien(int sanLuong);
}
