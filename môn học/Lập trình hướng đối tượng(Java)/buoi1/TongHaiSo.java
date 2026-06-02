package buoi1;
import java.util.Scanner;

public class TongHaiSo {
	public int nhap() {
		int n;
		String s;
		do {
			Scanner sc=new Scanner(System.in);
			System.out.print("Nhap so nguyen: ");
			s=sc.nextLine();
			try {
				n=Integer.parseInt(s);
				break;
			}
			catch(Exception e) {
				System.out.println("Nhap loi, vui long nhap lai!");
			}
		}while(true);
		return n;
	}
	public static void main(String[] args) {
		TongHaiSo t=new TongHaiSo();
		int a=t.nhap();
		int b=t.nhap();
		System.out.println(a+" + "+b+" = "+(a+b));
	}
}