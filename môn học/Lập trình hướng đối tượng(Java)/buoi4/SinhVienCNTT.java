package buoi4;

import java.util.Scanner;

import buoi3.SinhVien;

public class SinhVienCNTT extends SinhVien{
	private String taikhoan, matkhau, email;
	public SinhVienCNTT() {
		super();
		taikhoan=new String();
		matkhau=new String();
		email=new String();
	}
	public SinhVienCNTT(SinhVienCNTT s) {
		super(s);
		taikhoan=new String(s.taikhoan);
		matkhau=new String(s.matkhau);
		email=new String(s.email);
	}
	public void nhap() {
		super.nhap();
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap tai khoan: ");
		taikhoan=sc.nextLine();
		System.out.print("Nhap mat khau: ");
		matkhau=sc.nextLine();
		System.out.print("Nhap email: ");
		email=sc.nextLine();
	}
	public String toString() {
		return super.toString()+", voi tai khoan: "+taikhoan+", email: "+email;
	}
	public void in() {
		System.out.println(toString());
	}
	public String layEmail() {
		return email;
	}
}
