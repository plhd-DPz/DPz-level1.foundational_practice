package buoi5;

import java.util.Scanner;

public class KhachHang {
	private String maSo, hoTen, diaChi;
	
	public KhachHang() {
		maSo=new String();
		hoTen=new String();
		diaChi=new String();
	}
	public KhachHang(String maSo1,String hoTen1,String diaChi1) {
		maSo=new String(maSo1);
		hoTen=new String(hoTen1);
		diaChi=new String(diaChi1);
	}
	public KhachHang(KhachHang k) {
		maSo=new String(k.maSo);
		hoTen=new String(k.hoTen);
		diaChi=new String(k.diaChi);
	}
	public void nhap(Scanner sc) {
		System.out.print("Nhap ma so khach hang: ");
		maSo=sc.nextLine();
		System.out.print("Nhap ho ten khach hang: ");
		hoTen=sc.nextLine();
		System.out.print("Nhap dia chi khach hang: ");
		diaChi=sc.nextLine();
	}
	public void in() {
		System.out.println("Khach hang so "+maSo+": "+hoTen+", "+diaChi);
	}
	public String toString() {
		return "Khach hang "+maSo+": "+hoTen+", "+diaChi;
	}
	
	public float tiLeGiam() {
		return 0.0f;
	}
	
	public String layMaSoKhachHang() {
		return maSo;
	}
}
