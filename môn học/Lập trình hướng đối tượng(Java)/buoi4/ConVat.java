package buoi4;

import java.util.Scanner;

public abstract class ConVat {
	private String giong, mauLong;
	private float canNang;
	public abstract void keu();
	public ConVat() {
		giong=new String();
		mauLong=new String();
		canNang=0.0f;
	}
	public ConVat(ConVat d) {
		giong=new String(d.giong);
		mauLong=new String(d.mauLong);
		canNang=d.canNang;
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap giong: ");
		giong=sc.nextLine();
		System.out.print("Nhap mau long: ");
		mauLong=sc.nextLine();
		System.out.print("Nhap can nang: ");
		canNang=sc.nextFloat();
	}
	public String toString() {
		return "giong: "+giong+", mau long: "+mauLong+", can nang: "+canNang;
	}
	public void in() {
		System.out.println(toString());
	}
}
