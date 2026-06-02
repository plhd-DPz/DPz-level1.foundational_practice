package buoi1;

import java.util.Arrays;
import java.util.Scanner;

public class DanhSach {
	int n, ds[];
	static Scanner sc=new Scanner(System.in);
	public void nhap() {
		System.out.print("Nhap so phan tu: ");
		n=sc.nextInt();
		ds=new int[n];
		for (int i=0;i<n;i++) {
			System.out.print("Nhap phan tu thu "+(i+1)+": ");
			ds[i]=sc.nextInt();
		}
	}
	public void them(int x) {
		ds=Arrays.copyOf(ds, n+1);
		ds[n]=x;
		n++;
	}
	public void xoa(int x) {
		int i=0;
		for (i=0;i<n;i++) {
			if (ds[i]==x) break;
		}
		if (i==n-1 && ds[i]!=x) {
			System.out.println("Khong tim thay");
		}
		else {
			for (int j=i;j<n-1;j++) {
				ds[j]=ds[j+1];
			}
			n--;
		}
	}
	public int dem(int x) {
		int sl=0;
		for (int i : ds) {
			if (i==x) sl++;
		}
		return sl;
	}
	public void sxep() {
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				if (ds[i]>ds[j]) {
					int t=ds[i];
					ds[i]=ds[j];
					ds[j]=t;
				}
			}
		}
	}
	public void in() {
		System.out.print("Danh sach: ");
		for (int i=0;i<n;i++) {
			System.out.print(ds[i]+" ");
		}

		System.out.println("");
	}
	public static void main(String[] args) {
		DanhSach t=new DanhSach();
		t.nhap();		
		t.in();
		System.out.print("Nhap x: ");
		int x=sc.nextInt();
		System.out.println("So luong so "+x+" trong danh sach: "+t.dem(x));
		System.out.println("Nhap phan tu can them: ");
		x=sc.nextInt();
		t.them(x);
		System.out.println("Nhap phan tu can xoa: ");
		x=sc.nextInt();
		t.xoa(x);
		t.sxep();
		t.in();
	}
}