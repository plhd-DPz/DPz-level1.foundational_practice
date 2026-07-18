package buoi4BaiTapThem;

import java.util.Scanner;

public class HoaDon {
	private String maHD;
	private int thang, nam;
	private int chiSoDau, chiSoCuoi;
	private KhachHang kh;
	
	public HoaDon() {
		maHD=new String();
		thang=1;
		nam=1;
		chiSoDau=0;
		chiSoCuoi=0;
		kh=null;
	}
	public HoaDon(String maHD,int thang,int nam,int chiSoDau,int chiSoCuoi,KhachHang kh) {
		this.maHD=maHD;
		this.thang=thang;
		this.nam=nam;
		this.chiSoDau=chiSoDau;
		this.chiSoCuoi=chiSoCuoi;
		this.kh=kh;
	}
	public HoaDon(HoaDon h) {
		maHD=new String(h.maHD);
		thang=h.thang;
		nam=h.nam;
		chiSoDau=h.chiSoDau;
		chiSoCuoi=h.chiSoCuoi;
		kh=h.kh;
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap ma hoa don: ");
		maHD=sc.nextLine();
		System.out.print("Nhap thang: ");
		thang=sc.nextInt();
		System.out.print("Nhap nam: ");
		nam=sc.nextInt();
		System.out.print("Nhap chi so cong to dau ky: ");
		chiSoDau=sc.nextInt();
		System.out.print("Nhap chi so cong to cuoi ky: ");
		chiSoCuoi=sc.nextInt();
		System.out.println("Nhap thong tin khach hang: \nLoai khach hang:");
	    System.out.println("1. Sinh hoat");
	    System.out.println("2. Kinh doanh");
	    int chon=Integer.parseInt(sc.nextLine());
	    if (chon==1) kh = new KhachHangSinhHoat();
	    else kh = new KhachHangKinhDoanh();
	    kh.nhap();
	}
	public void in() {
		System.out.println("Khach hang: "+kh+": ["+thang+"/"+nam+", "+maHD+", "+chiSoDau+", "+chiSoCuoi+"]");
	}
	public String toString() {
		return "Khach hang: "+kh+": ["+thang+"/"+nam+", "+maHD+", "+chiSoDau+", "+chiSoCuoi+"]";
	}
	
	public int getSanLuong() {
		return chiSoCuoi-chiSoDau;
	}
	public double tinhTien() {
		return kh.tinhTien(getSanLuong());
	}
	
}
