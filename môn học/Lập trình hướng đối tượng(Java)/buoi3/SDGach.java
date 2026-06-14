package buoi3;

import java.util.Scanner;

public class SDGach {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
        System.out.print("Nhap so loai gach: ");
        int n = sc.nextInt();
        Gach[] ds = new Gach[n];
        for (int i = 0; i < n; i++) {
            System.out.println("\nNhap loai gach thu " + (i + 1));
            ds[i] = new Gach();
            ds[i].nhap();
        }
        System.out.println("\ndanh sach gach: ");
        for (Gach g : ds) {
            g.in();
        }
        Gach min = ds[0];
        float minCost = min.giaBanLe() / min.dtVien();

        for (int i = 1; i < n; i++) {
            float cost = ds[i].giaBanLe() / ds[i].dtVien();
            if (cost < minCost) {
                minCost = cost;
                min = ds[i];
            }
        }
        System.out.println("\ngach co chi phi thap nhat: ");
        min.in();
        System.out.println("Chi phi: " + minCost);
        System.out.print("\nNhap dien tich nen: ");
        int D = sc.nextInt();
        int N = sc.nextInt();
        long tongChiPhi = 0;
        int soHop = min.soLuongHop(D, N);
        tongChiPhi = (long) soHop * min.layGia(); // 1 hop
        System.out.println("So hop can de lat nen: " + soHop);
        System.out.println("Tong chi phi: " + tongChiPhi);
	}

}
