package buoi4BaiTapThem;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        QuanLyHoaDon ql = new QuanLyHoaDon();
        int chon;
        do {
            System.out.println("\n========== MENU ==========");
            System.out.println("1. Nhap danh sach hoa don");
            System.out.println("2. Hien thi danh sach hoa don");
            System.out.println("3. Them hoa don");
            System.out.println("4. Xoa hoa don");
            System.out.println("5. Cap nhat hoa don");
            System.out.println("6. Tim kiem hoa don");
            System.out.println("7. Tinh tong doanh thu");
            System.out.println("8. Thong ke san luong theo nhom");
            System.out.println("9. Tim hoa don lon nhat");
            System.out.println("10. Sap xep danh sach");
            System.out.println("0. Thoat");
            System.out.println("==========================");

            System.out.print("Nhap lua chon: ");
            chon = Integer.parseInt(sc.nextLine());
            String maHD, maKH;
            switch(chon) {
                case 1:
                    ql.nhap();
                    break;
                case 2:
                    ql.in();
                    break;
                case 3:
                    ql.them();
                    break;
                case 4:
                    System.out.print("Nhap ma hoa don can xoa: ");
                    maHD = sc.nextLine();
                    ql.xoa(maHD);
                    break;
                case 5:
                    System.out.print("Nhap ma hoa don can sua: ");
                    maHD = sc.nextLine();
                    ql.capNhat(maHD);
                    break;
                case 6:
                	System.out.print("Nhap ma khach hang can tim: ");
                	maKH = sc.nextLine();
                    ql.timKiemTheoMaKH(maKH);
                    break;
                case 7:
                    System.out.println(
                        "Tong doanh thu: "
                        + ql.tongDoanhThu()
                    );
                    break;
                case 8:
                	System.out.println("Thong ke theo tieu chi:");
                	System.out.println("1. So luong hoa don");
                	System.out.println("2. Tong doanh thu");
                	System.out.println("3. Khach hang co san luong dien tieu thu lon nhat");
                	int t=sc.nextInt();
                    switch(t) {
                    case 1: 
                    	ql.thongKeHoaDon(); 
                    	break;
                    case 2: 
                    	ql.thongKeDoanhThu();
                    	break;
                    case 3: 
                    	ql.thongKeKHTieuThu();
                    	break;
                    default: System.out.println("Lua chon tieu chi khong hop le!");
                    }
                    break;
                case 9:
                    HoaDon hd = ql.hoaDonLonNhat();
                    if(hd != null) hd.in();
                    else System.out.println("Danh sach rong!");
                    break;
                case 10:
                    ql.sapXepTheoMaKH();
                    break;
                case 0:
                    System.out.println("Ket thuc chuong trinh!");
                    break;
                default:
                    System.out.println("Lua chon khong hop le!");
            }
        } while(chon != 0);
        sc.close();
	}

}
