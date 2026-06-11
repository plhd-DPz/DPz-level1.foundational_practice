package buoi2;

import java.util.Scanner;

public class Diem {
	private int x,y;
	public Diem() {
		x=0;
		y=0;
	}
	public Diem(int n) {
		x=y=n;
	}
	public Diem(int x1, int y1) {
		x=x1;
		y=y1;
	}
	public Diem(Diem a) {
		x=a.x;
		y=a.y;
	}
	public void in() {
		System.out.println("("+x+","+y+")");
	}
	public String toString() {
		return "("+x+","+y+")";
	}
	public void nhap() {
		Scanner sc=new Scanner(System.in);
		System.out.println("\nNhap x= ");
		x=sc.nextInt();
		System.out.println("\nNhap y= ");
		y=sc.nextInt();
	}
	public void gan(int x1, int y1) {
		x=x1;
		y=y1;
	}
	public void tinhTien(int dx, int dy) {
		x=x+dx;
		y=y+dy;
	}
	public float kcach() {
		return (float)Math.sqrt(x*x+y*y);
	}
	public float kcach(Diem b) {
		return (float)Math.sqrt(Math.pow(x-b.x,2)+Math.pow(y-b.y, 2));
	}
	public int layX() {
		return x;
	}
	public int layY() {
		return y;
	}
	public void TrungDiem(Diem b) {
		System.out.println("Trung diem A, B co toa do: "+(x+b.x)/2.0+","+(y+b.y)/2.0);
	}
}
