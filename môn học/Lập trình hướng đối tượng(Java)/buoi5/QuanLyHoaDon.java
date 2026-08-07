package buoi5;

import java.util.Scanner;

public class QuanLyHoaDon {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		HoaDon ds[];
		
		System.out.print("Nhap so luong hoa don: ");
		int n=sc.nextInt();
		sc.nextLine();
		ds=new HoaDon[n];
		System.out.println("Nhap cac hoa don trong danh sach: ");
		for (int i=0;i<n;i++) {
			ds[i]=new HoaDon();
			System.out.println("Nhap hoa don thu "+(i+1)+": ");
			ds[i].nhap(sc);
			ds[i].inSoTienPhaiTra();
		}
		do {
			int c;
			System.out.println("Chon hanh dong can lam: ");
			System.out.println("1: Tinh tong doanh thu theo thang");
			System.out.println("2: Tim kiem hoa don theo ma so hoa don");
			System.out.println("3: Tim kiem cac hoa don theo ma so khach hang va tinh tong so tien phai tra");
			System.out.println("4+: ket thuc chuong trinh");
			System.out.print("Chon: ");
			c=sc.nextInt();
			if(c>=4) {
			    System.out.println("Chuong trinh ket thuc!");
			    break;
			}
			sc.nextLine();
			if (c==1) {
				System.out.println("Nhap thang/nam can tinh tong doanh thu: ");
				System.out.print("Nhap thang: ");
				int m=sc.nextInt();
				System.out.print("Nhap nam: ");
				int y=sc.nextInt();
				long tong=0;
				for (HoaDon e : ds) {
					if (e.layNgayXuatHoaDon().layThang()==m && e.layNgayXuatHoaDon().layNam()==y) {
						tong+=e.tong();
					}
				}
				System.out.println("Tong doanh thu thang "+m+"/"+y+" la: "+tong);
			}
			else if (c==2) {
				System.out.print("Nhap ma so hoa don can tim: ");
				String s=sc.nextLine();
				boolean have=false;
				for (HoaDon e : ds) {
					if (e.layMaSoHoaDon().equals(s)) {
						System.out.println(e);
						have=true;
						break;
					}
				}
				if (!have) System.out.println("Khong tim thay hoa don voi ma so "+s);
			}
			else if (c==3) {
				System.out.print("Nhap ma so khach hang can tim: ");
				String s=sc.nextLine();
				long tong=0;
				for (HoaDon e : ds) {
					if (e.layKhachHang().layMaSoKhachHang().equals(s)) {
						System.out.println(e);
						tong+=e.tong();
					}
				}
				System.out.println("Tong so tien khach hang "+s+" phai tra la: "+tong);
			}
		}while(true);
	}

}
