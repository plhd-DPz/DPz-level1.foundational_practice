package buoi2;

import java.util.Scanner;

public class Date {
	private int d, m, y;
	public Date() {
		d=1;
		m=1;
		y=2026;
	}
	public Date(int d1, int m1, int y1) {
		d=d1;
		m=m1;
		y=y1;
	}
	public Date(Date a) {
		d=a.d;
		m=a.m;
		y=a.y;
	}
	public void in() {
		System.out.println(d+"/"+m+"/"+y);
	}
	public String toString() {
		return d+"/"+m+"/"+y;
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		do {
			System.out.println("Nhap ngay: ");
			d=sc.nextInt();
			System.out.println("Nhap thang: ");
			m=sc.nextInt();
			System.out.println("Nhap nam: ");
			y=sc.nextInt();
		} while (!hople());
	}
	public boolean hople() {
		int max[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
		if ((y%4==0 && y%100!=0) || y%400==0) max[2]=29;
		if (d>0&&m>0&&y>0&&m<13&&d<max[m]) return true;
		else return false;
	}
	public Date cong() {
		Date a=new Date(d,m,y);
		a.d++;
		if(!hople()) {
			a.m++;
			a.d=1;
			if(!hople()) {
				a.y++;
				a.m=1;
			}
		}
		return a;
	}
	public Date cong(int n) {
		Date a=new Date(d,m,y);
		for (int i=0;i<n;i++) {
			a=a.cong();
		}
		return a;
	}
}
