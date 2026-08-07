package buoi5;

import java.util.Scanner;

public class MyDate {
	private int ngay, thang, nam;
	
	public MyDate() {
		ngay=1;
		thang=1;
		nam=2026;
	}
	public MyDate(int ngay1, int thang1, int nam1) {
		ngay=ngay1;
		thang=thang1;
		nam=nam1;
	}
	public MyDate(MyDate d) {
		ngay=d.ngay;
		thang=d.thang;
		nam=d.nam;
	}
	public void nhap(Scanner sc) {
		do {
			System.out.print("Nhap ngay: ");
			ngay=sc.nextInt();
			System.out.print("Nhap thang: ");
			thang=sc.nextInt();
			System.out.print("Nhap nam: ");
			nam=sc.nextInt();
			sc.nextLine();
			if (!hopLe()) System.out.println("Ngay khong hop le, vui long nhap lai!");
		} while (!hopLe());
	}
	public boolean hopLe() {
		int max[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
		if ((nam%4==0 && nam%100!=0) || nam%400==0) max[2]=29;
		if (ngay>0 && thang>0 && nam>0 && thang<13 && ngay<=max[thang]) return true;
		return false;
	}
	public void in() {
		System.out.println(ngay+"/"+thang+"/"+nam);
	}
	public String toString() {
		return ngay+"/"+thang+"/"+nam;
	}
	
	public int layThang() {
		return thang;
	}
	public int layNam() {
		return nam;
	}
}
