package buoi4BaiTapThem;

import java.util.ArrayList;
import java.util.Scanner;

public class QuanLyHoaDon {
	private ArrayList<HoaDon> ds;
	
	public QuanLyHoaDon() {
		ds=new ArrayList<>();
	}
	public QuanLyHoaDon(ArrayList<HoaDon> ds1) {
		ds=new ArrayList<>(ds1);
	}
	public QuanLyHoaDon(QuanLyHoaDon dsk) {
		ds=new ArrayList<>(dsk.ds);
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so luong hoa don: ");
		int n=sc.nextInt();
		for (int i=0;i<n;i++) {
			System.out.print("Nhap hoa don thu "+(i+1)+": ");
			HoaDon hd=new HoaDon();
			hd.nhap();
			ds.add(hd);
		}
	}
	public void in() {
		for (HoaDon hd : ds) hd.in();
	}
	public String toString() {
        String s = new String();
        for(HoaDon hd : ds) {
            s += hd.toString() + "\n";
        }
        return s;
    }
	public void them() {
		
	}
	public void xoa(String maHD) {
		
	}
	public void capNhat(String maHD) {
		
	}
	public void timKiemTheoMaKH(String maKD) {
		
	}
	public void timKiemTheoTen() {
		
	}
	public double tongDoanhThu() {
		return 0;
	}
	public HoaDon hoaDonLonNhat() {
		HoaDon h=new HoaDon();
		return h;
	}
	public void lietKeTheoNhom() {
		
	}
	public void sapXepTheoMaKH() {
		
	}
	public void thongKeHoaDon() {
		
	}
	public void thongKeDoanhThu() {
		
	}
	public void thongKeKHTieuThu() {
		
	}
}
