package buoi3;

import java.util.Scanner;

import buoi2.Date;

public class SinhVien {
	private String mssv, hoTen;
	private Date ngaySinh;
	private int n;
	private String mon[], diem[];
	
	static Scanner sc=new Scanner(System.in);
	
	public SinhVien() {
		mssv=new String();
		hoTen=new String();
		ngaySinh=new Date();
		n=0;
		mon=new String[60];
		diem=new String[60];
	}
	public SinhVien(SinhVien s) {
		mssv=new String(s.mssv);
		hoTen=new String(s.hoTen);
		ngaySinh=new Date(s.ngaySinh);
		n=s.n;
		mon=new String[60];
		diem=new String[60];
		for (int i=0;i<n;i++) {
			mon[i]=new String(s.mon[i]);
			diem[i]=new String(s.diem[i]);
		}
	}
	public void nhap() {
		System.out.print("Nhap MSSV: ");
		mssv=sc.nextLine();
		System.out.print("Nhap ho ten:");
		hoTen=sc.nextLine();
		System.out.println("Nhap ngay sinh: ");
		ngaySinh.nhap();
		while (true) {
			System.out.println("\nNhap so mon hoc cua sinh vien"+hoTen+": ");
			n=sc.nextInt();
			if (n>=0 && n<=60) break;
			else System.out.println("So mon hoc khong hop le! vui long nhap lai:");
		}
		sc.nextLine();
		System.out.println("\nNhap thong tin cac mon hoc:");
		for (int i=0;i<n;i++) {
			System.out.print("Nhap mon thu "+(i+1)+": ");
			mon[i]=sc.nextLine();
			System.out.print("Nhap diem: ");
			diem[i]=sc.nextLine();
			System.out.println("");
		}
	}
	public void in() {
		System.out.print("["+mssv+", "+hoTen+", "+ngaySinh);
		for (int i=0;i<n;i++) System.out.print(", "+mon[i]+": "+diem[i]);
		System.out.println("]");
	}
	public String toString() {
		String s="["+mssv+", "+hoTen+", "+ngaySinh;
		for (int i=0;i<n;i++) s+=(", "+mon[i]+": "+diem[i]);
		s+="]";
		return s;
	}
	public float diemTB() {
		float d=0.0f;
		for (int i=0;i<n;i++) {
			if(diem[i].equals("A")) d+=4;
			else if (diem[i].equals("B+")) d+=3.5;
			else if (diem[i].equals("B")) d+=3;
			else if (diem[i].equals("C+")) d+=2.5;
			else if (diem[i].equals("C")) d+=2;
			else if (diem[i].equals("D+")) d+=1.5;
			else if (diem[i].equals("D")) d+=1;
		}
		if (n==0) return 0;
		return d/n;
	}
	public String xepLoai() {
	    float dtb = diemTB();
	    if (dtb >= 3.6) return "Xuat sac";
	    else if (dtb >= 3.2) return "Gioi";
	    else if (dtb >= 2.5) return "Kha";
	    else if (dtb>=2.0) return "Trung binh";
	    else if (dtb>=1.0) return "Yeu";
	    else return "Kem";
	}
	public void them(String m) {
		if (n<60) {
			mon[n]=new String(m);
			diem[n]=new String("Chua nhap diem");
			n++;
		}
		else System.out.println("So luong mon da day!");
	}
	public void ganDiem(String m, String d) {
		int i=0;
		for (i=0;i<n;i++) if (mon[i].equals(m)) break;
		if (i<n) diem[i]=new String(d);
		else System.out.println("Khong tim thay mon "+m+"!");
	}
	public void xoa(String m) {
		int i=0;
		for (i=0;i<n;i++) if (mon[i].equals(m)) break;
		if (i<n) {
			for (int j=i;j<n-1;j++) {
				mon[j]=mon[j+1];
				diem[j]=diem[j+1];
			}
			n--;
		}
		else System.out.println("Khong tim thay mon "+m+"!");
	}
	public String layTen() {
		String t=hoTen.trim();
		int p=t.lastIndexOf(" ");
		return t.substring(p+1);
	}
	public static void timTheoTen(SinhVien ds[], int n1) {
		System.out.print("Nhap ten can tim: ");
		String ten = sc.nextLine();
		int cnt=0;
		for (int i = 0; i < n1; i++) {
		    if (ds[i].hoTen.equals(ten)) {
		        ds[i].in();
		        cnt++;
		    }
		}
		if (cnt==0) System.out.println("Khong tim thay sinh vien theo ten!");
		else System.out.println("Tim thay tong cong "+cnt+" sinh vien.");
	}
	public static void timTheoNgaySinh(SinhVien ds[], int n1) {
		System.out.println("Nhap ngay sinh can tim: ");
		Date d=new Date();
		d.nhap();
		int cnt=0;
		for (int i=0;i<n1;i++) {
			if (ds[i].ngaySinh.equals(d)) {
				ds[i].in();
				cnt++;
			}
		}
		if (cnt==0) System.out.println("Khong tim thay sinh vien theo ngay sinh!");
		else System.out.println("Tim thay tong cong "+cnt+" sinh vien.");
	}
}
