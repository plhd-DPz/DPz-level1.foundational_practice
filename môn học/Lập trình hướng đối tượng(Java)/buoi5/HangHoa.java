package buoi5;

import java.util.Scanner;

public class HangHoa {
	private String maSo, ten, nhaSanXuat;
	public HangHoa() {
		maSo=new String();
		ten=new String();
		nhaSanXuat=new String();
	}
	public HangHoa(String maSo1, String ten1, String nhaSanXuat1) {
		maSo=new String(maSo1);
		ten=new String(ten1);
		nhaSanXuat=new String(nhaSanXuat1);
	}
	public HangHoa(HangHoa h) {
		maSo=new String(h.maSo);
		ten=new String(h.ten);
		nhaSanXuat=new String(h.nhaSanXuat);
	}
	public void nhap(Scanner sc) {
		System.out.print("Nhap ma so hang hoa: ");
		maSo=sc.nextLine();
		System.out.print("Nhap ten hang hoa: ");
		ten=sc.nextLine();
		System.out.print("Nhap ten nha san xuat: ");
		nhaSanXuat=sc.nextLine();
	}
	public void in() {
		System.out.println("Hang hoa so "+maSo+": "+ten+", nha san xuat: "+nhaSanXuat);
	}
	public String toString() {
		return "Hang hoa so "+maSo+": "+ten+", nha san xuat: "+nhaSanXuat;
	}
}
