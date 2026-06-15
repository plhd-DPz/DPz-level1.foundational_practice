package buoi2;

import java.util.Scanner;

public class SDDate {

	public static void main(String[] args) {
		Date a=new Date(8,6,2026);
		System.out.println("Ngay a: "+a);
		System.out.println(a + " la " + a.thu());
		Date b=new Date();
		b.nhap();
		b.in();
		System.out.println("ngay sau khi cong 32000 ngay: ");
		b=b.congNgay(32000);
		b.in();
		//BTVN: hôm nay thứ 2 ngày 8/6/2026, 125 ngày nữa là thứ mấy?
		System.out.println("125 ngay sau 8/6/2026 la " + a.thu(125));
		Date ds[];
		Scanner sc=new Scanner(System.in);
		System.out.print("Nhap so phan tu cho mang cac ngay: ");
		int n=sc.nextInt();
		ds=new Date[n];
		for (int i=0;i<n;i++) {
			ds[i]=new Date();
			System.out.println("Nhap ngay thu "+(i+1)+": ");
			ds[i].nhap();
		}
		System.out.println("Hien thi ngay trong danh sach: ");
		for (Date e : ds) e.in();
		//BTVN: in các ngày trước và sau mốc
		Date moc=new Date();
		System.out.println("Nhap ngay moc: ");
		moc.nhap();
		System.out.println("Cac ngay truoc moc "+moc.layNgay()+"/"+moc.layThang()+"/"+moc.layNam()+": ");
		for (Date e : ds) {
			if (e.ngayTruoc(moc)) e.in();
		}
		System.out.println("Cac ngay sau moc "+moc.layNgay()+"/"+moc.layThang()+"/"+moc.layNam()+": ");
		for (Date e : ds) {
			if (e.ngaySau(moc)) e.in();
		}
		//BTVN: in lịch năm 2027
		Date temp=new Date();
		System.out.println("\nLich nam 2027: ");
		temp.inNam(2027);
	}

}
