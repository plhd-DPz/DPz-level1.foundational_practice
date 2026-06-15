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
	public void nhapDiem() {
		Scanner sc=new Scanner(System.in);
		System.out.print("\nNhap toa do x = ");
		x=sc.nextInt();
		System.out.print("\nNhap toa do y = ");
		y=sc.nextInt();
	}
	public void hienThi() {
		System.out.println("("+x+","+y+")");
	}
	public String toString() {
		return "("+x+","+y+")";
	}
	public void gan(int x1, int y1) {
		x=x1;
		y=y1;
	}
	public void doiDiem(int dx, int dy) {
		x=x+dx;
		y=y+dy;
	}
	public float khoangCach() {
		return (float)Math.sqrt(x*x+y*y);
	}
	public float khoangCach(Diem d) {
		return (float)Math.sqrt(Math.pow(x-d.x,2)+Math.pow(y-d.y,2));
	}
	public int giaTriX() {
		return x;
	}
	public int giaTriY() {
		return y;
	}
	public void TrungDiem(Diem b) {
		System.out.println("Trung diem A, B co toa do: "+(x+b.x)/2.0+","+(y+b.y)/2.0);
	}
}
