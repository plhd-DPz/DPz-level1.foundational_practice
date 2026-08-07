package buoi5;

import java.util.Scanner;

public class ChiTiet {
	private HangHoa h;
	private int soLuong, donGia;
	
	public ChiTiet() {
		h=new HangHoa();
		soLuong=0;
		donGia=0;
	}
	public ChiTiet(int soLuong1, int donGia1, HangHoa h1) {
		h=new HangHoa(h1);
		soLuong=soLuong1;
		donGia=donGia1;
	}
	public ChiTiet(ChiTiet c) {
		h=new HangHoa(c.h);
		soLuong=c.soLuong;
		donGia=c.donGia;
	}
	public void nhap(Scanner sc) {
		System.out.println("Nhap thong tin hang hoa: ");
		h.nhap(sc);
		System.out.print("Nhap so luong hang hoa: ");
		soLuong=sc.nextInt();
		System.out.print("Nhap don gia cua hang hoa: ");
		donGia=sc.nextInt();
		sc.nextLine();
	}
	public void in() {
		h.in();
		System.out.print("Voi so luong: "+soLuong+", don gia: "+donGia);
	}
	public String toString() {
		return h.toString()+"\nVoi so luong: "+soLuong+", don gia: "+donGia;
	}
	public long thanhTien() {
		return (long)soLuong*donGia;
	}
}
