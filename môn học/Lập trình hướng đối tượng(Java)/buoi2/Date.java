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
		if (!hopLe()) {
			System.out.println("Ngay duoc truyen vao khong hop le!");
			d=1;
			m=1;
			y=2026;
		}
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
			System.out.print("Nhap ngay: ");
			d=sc.nextInt();
			System.out.print("Nhap thang: ");
			m=sc.nextInt();
			System.out.print("Nhap nam: ");
			y=sc.nextInt();
			if (!hopLe()) System.out.println("Ngay khong hop le, vui long nhap lai!");
		} while (!hopLe());
	}
	public int layNgay() {
		return d;
	}
	public int layThang() {
		return m;
	}
	public int layNam() {
		return y;
	}
	public boolean hopLe() {
		int max[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
		if ((y%4==0 && y%100!=0) || y%400==0) max[2]=29;
		if (d>0 && m>0 && y>0 && m<13 && d<=max[m]) return true;
		else return false;
	}
	public Date ngayHomSau() {
		Date a=new Date(this);
		a.d++;
		if(!a.hopLe()) {
			a.m++;
			a.d=1;
			if(!a.hopLe()) {
				a.y++;
				a.m=1;
			}
		}
		return a;
	}
	public Date congNgay(int n) {
		Date a=new Date(d,m,y);
		for (int i=0;i<n;i++) {
			a=a.ngayHomSau();
		}
		return a;
	}
	public boolean ngayTruoc(Date a) {
		if (y!=a.y) return y<a.y;
		if (m!=a.m) return m<a.m;
		return d<a.d;
	}
	public boolean equals(Date a) {
	    return d == a.d && m == a.m && y == a.y;
	}
	public int khoangCachTuMoc() {
	    Date moc = new Date(8,6,2026);     //biết 8/6/2026 là thứ 2
	    if (this.equals(moc))
	        return 0;
	    int dem = 0;
	    if (moc.ngayTruoc(this)) {
	        Date a = new Date(moc);
	        while (!a.equals(this)) {
	            a = a.ngayHomSau();
	            dem++;
	        }
	        return dem;
	    }
	    Date a = new Date(this);
	    while (!a.equals(moc)) {
	        a = a.ngayHomSau();
	        dem++;
	    }
	    return -dem;
	}
	public String thu() {
	    String t[] = {"", "Thu hai", "Thu ba", "Thu tu", "Thu nam", "Thu sau", "Thu bay", "Chu nhat"};
	    int thu = ((khoangCachTuMoc() % 7) + 7) % 7 + 1; //quy ước Thứ 2 là 1
	    return t[thu];
	}
	public String thu(int n) {  //n ngày nữa là thứ mấy tính từ ngày 8/6/2026
		String t[] = {"", "Thu hai", "Thu ba", "Thu tu", "Thu nam", "Thu sau", "Thu bay", "Chu nhat"};
	    int k = ((n % 7) + 7) % 7 + 1;
	    return t[k];
	}
	public int soNgayTrongThang() {
	    int max[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	        max[2] = 29;
	    return max[m];
	}
	public void inThang() {
	    int thuDau = khoangCachTuMoc();
	    thuDau = ((thuDau % 7) + 7) % 7 + 1;
	    System.out.println("\nTHANG " + m + "/" + y);
	    System.out.println(" T2  T3  T4  T5  T6  T7  CN");
	    for (int i = 1; i < thuDau; i++)
	        System.out.print("    ");
	    int sn = soNgayTrongThang();
	    for (int i = 1; i <= sn; i++) {
	        System.out.printf("%3d ", i);
	        if ((i + thuDau - 1) % 7 == 0)
	            System.out.println();
	    }
	    System.out.println();
	}
}
