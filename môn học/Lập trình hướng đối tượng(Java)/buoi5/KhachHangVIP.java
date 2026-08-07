package buoi5;

import java.util.Scanner;

public class KhachHangVIP extends KhachHang{
	private float tiLeGiam;
	private MyDate ngayBD, ngayKT;
	
	public KhachHangVIP() {
		super();
		tiLeGiam=0.0f;
		ngayBD=new MyDate();
		ngayKT=new MyDate();
	}
	public KhachHangVIP(KhachHangVIP k) {
		super(k);
		tiLeGiam=k.tiLeGiam;
		ngayBD=new MyDate(k.ngayBD);
		ngayKT=new MyDate(k.ngayKT);
	}
	public void nhap(Scanner sc) {
		super.nhap(sc);
		System.out.print("Nhap ti le khuyen mai giam gia: ");
		tiLeGiam=sc.nextFloat();
		System.out.println("Nhap ngay bat dau chuong trinh VIP: ");
		ngayBD.nhap(sc);
		System.out.println("Nhap ngay ket thuc chuong trinh VIP: ");
		ngayKT.nhap(sc);
	}
	public void in() {
		super.in();
		System.out.println("voi ti le giam gia la: "+tiLeGiam+", ngay bat dau: "+ngayBD+", ngay ket thuc: "+ngayKT);
	}
	public String toString() {
		return super.toString()+"voi ti le giam gia la: "+tiLeGiam+", ngay bat dau: "+ngayBD+", ngay ket thuc: "+ngayKT;
	}
	
	public float tiLeGiam() {
		return tiLeGiam;
	}
}
