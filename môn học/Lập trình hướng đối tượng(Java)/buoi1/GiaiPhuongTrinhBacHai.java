package buoi1;

import java.util.Scanner;

public class GiaiPhuongTrinhBacHai {
	public static void gptb1(double a, double b) {
		if (a==0) {
			if (b==0) System.out.println("PT vo so nghiem");
			else System.out.println("PT vo nghiem");
		}
		else System.out.println("PT co nghiem x = "+(-b/a));
	}
	public static void gptb2(double a, double b, double c) {
		if (a==0) gptb1(b, c);
		else {
			double d=b*b-4*a*c;
			if (d<0) System.out.println("PT vo nghiem");
			else if (d==0) System.out.println("PT co nghiem x = "+(-b/(2*a)));
			else {
				d=Math.sqrt(d);
				System.out.println("PT co nghiem x1 = "+((-b+d)/(2*a))+" va x2 = "+((-b-d)/(2*a)));
			}
		}
	}
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap a: ");
		double a=sc.nextDouble();
		System.out.print("Nhap b: ");
		double b=sc.nextDouble();
		System.out.print("Nhap c: ");
		double c=sc.nextDouble();
		GiaiPhuongTrinhBacHai.gptb2(a, b, c);
	}

}