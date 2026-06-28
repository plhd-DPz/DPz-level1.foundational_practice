package buoi3;

import java.util.Scanner;

public class SDGach {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.print("Nhap so loai gach: ");
        int n=sc.nextInt();
        Gach ds[]=new Gach[n];
        for (int i=0;i<n;i++) {
            System.out.println("Nhap gach thu " + (i + 1));
            ds[i]=new Gach();
            ds[i].nhap();
        }
        System.out.println("\nDanh sach gach:");
        for (int i=0;i<n;i++) {
            ds[i].in();
        }
        int viTri=0;
        double min=(double)ds[0].layGia()/ds[0].dtToiDa();
        for (int i=1;i<n;i++) {
            double cost=(double)ds[i].layGia()/ds[i].dtToiDa();
            if (cost < min) {
                min=cost;
                viTri=i;
            }
        }
        System.out.println("\nLoai gach co chi phi lot thap nhat:");
        ds[viTri].in();
        System.out.println("\nChi phi lot nen 5m x 20m:");
        for (int i = 0; i < n; i++) {
            int soHop=ds[i].soLuongHop(5, 20);
            long chiPhi=soHop*ds[i].layGia();
            System.out.println("Loai gach "+(i+1)+": "+chiPhi);
        }
    }
}