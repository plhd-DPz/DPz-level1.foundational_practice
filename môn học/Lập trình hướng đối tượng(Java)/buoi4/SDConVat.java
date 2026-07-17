package buoi4;

import java.util.Scanner;

public class SDConVat {

	public static void main(String[] args) {
		ConVat d=new Bo();
		System.out.print("con bo keu: ");
		d.keu();
		d=new Heo();
		System.out.print("con heo keu: ");
		d.keu();
		d=new De();
		System.out.print("con de keu: ");
		d.keu();
		d=new Ga();
		System.out.print("con ga keu: ");
		d.keu();
		ConVat ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("\nNhap so luong con vat: ");
		int n=sc.nextInt();
		ds=new ConVat[n];
		int dsConVat[]=new int[n];
		for (int i=0;i<n;i++) {
			System.out.println("Nhap thong tin con vat thu "+(i+1)+": ");
			int c;
			System.out.print("Nhap con vat nao? Bo(1), Heo(2), De(3), Ga(4): ");
			c=sc.nextInt();
			dsConVat[i]=c;
			if (c==1) ds[i]=new Bo();
			else if (c==2) ds[i]=new Heo();
			else if (c==3) ds[i]=new De();
			else ds[i]=new Ga();
			ds[i].nhap();
		}
		System.out.println("Danh sach con vat da nhap: ");
		for (int i=0;i<n;i++) {
			System.out.print("Con vat thu "+(i+1)+" la con ");
			if (dsConVat[i]==1) {
				System.out.print("bo: ");
				ds[i].in();
				System.out.print("keu: ");
				d=new Bo();
				d.keu();
			}
			else if (dsConVat[i]==2) {
				System.out.print("heo: ");
				ds[i].in();
				System.out.print("keu: ");
				d=new Heo();
				d.keu();
			}
			else if (dsConVat[i]==3) {
				System.out.print("de: ");
				ds[i].in();
				System.out.print("keu: ");
				d=new De();
				d.keu();
			}
			else {
				System.out.print("ga: ");
				ds[i].in();
				System.out.print("keu: ");
				d=new Ga();
				d.keu();
			}
		}
	}

}
