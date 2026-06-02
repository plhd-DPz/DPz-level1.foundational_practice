package buoi1;

import java.util.Scanner;

public class TachTen {
	public String tachten(String s) {
		s=s.trim();
		int p=s.lastIndexOf(" ");
		String ten=s.substring(p+1);
		return ten;
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap ho ten: ");
		String hten=sc.nextLine();
		TachTen t=new TachTen();
		System.out.println("Ten: "+t.tachten(hten));
	}

}