package buoi1;

import java.util.Scanner;
public class SoNguyenTo {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so nguyen: ");
		int n=sc.nextInt();
		boolean nto=true;
		if (n<2) nto=false;
		for (int i=2;i*i<=n;i++) {
			if (n%i==0) {
				nto=false;
				break;
			}
		}
		if (nto) System.out.println(n+" la so nguyen to");
		else System.out.println(n+" khong la so nguyen to");
		System.out.println(n+" duoi dang nhi phan: "+Integer.toBinaryString(n));
	}
}