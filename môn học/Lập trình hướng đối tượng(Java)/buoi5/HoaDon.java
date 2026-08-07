package buoi5;

import java.util.Scanner;

public class HoaDon {
	private String maSo, tieuDe;
	private KhachHang kh;
	private ChiTiet ds[];
	private MyDate ngayXuatHoaDon;
	
	public HoaDon() {
		maSo=new String();
		tieuDe=new String();
		kh=new KhachHang();
		ds=new ChiTiet[100];
		ngayXuatHoaDon=new MyDate();
	}
	public HoaDon(HoaDon h) {
		maSo=new String(h.maSo);
		tieuDe=new String(h.tieuDe);
		if (h.kh instanceof KhachHangVIP) kh=new KhachHangVIP((KhachHangVIP)h.kh);
		else kh=new KhachHang(h.kh);
		ds=new ChiTiet[h.ds.length];
		for (int i=0;i<h.ds.length;i++) {
			ds[i]=new ChiTiet(h.ds[i]);
		}
		ngayXuatHoaDon=new MyDate(h.ngayXuatHoaDon);
	}
	public void nhap(Scanner sc) {
		System.out.print("Nhap ma so hoa don: ");
		maSo=sc.nextLine();
		System.out.print("Nhap tieu de hoa don: ");
		tieuDe=sc.nextLine();
		System.out.println("Nhap thong tin khach hang: ");
		System.out.print("Co phai khach hang VIP khong? <Khong(0) Co(1)> : ");
		int c=sc.nextInt();
		sc.nextLine();
		if (c==0) kh.nhap(sc);
		else {
			kh=new KhachHangVIP();
			kh.nhap(sc);
		}
		System.out.print("Nhap so luong chi tiet co trong hoa don: ");
		int n=sc.nextInt();
		sc.nextLine();
		System.out.println("Nhap thong tin "+n+" chi tiet: ");
		for (int i=0;i<n;i++) {
			ds[i]=new ChiTiet();
			System.out.println("Nhap thong tin chi tiet thu "+(i+1)+": ");
			ds[i].nhap(sc);
		}
		System.out.println("Nhap ngay xuat hoa don: ");
		ngayXuatHoaDon.nhap(sc);
	}
	public void in() {
		System.out.println("Hoa don: "+tieuDe+": "+maSo+", "+kh+"\nChi tiet: ");
		for (int i=0;i<ds.length;i++) {
			if (ds[i]==null) break;
			System.out.println(ds[i]);
		}
		System.out.println("Ngay xuat hoa don: "+ngayXuatHoaDon);
	}
	public String toString() {
		String s="Hoa don "+tieuDe+": "+maSo+", "+kh+"\nChi tiet: ";
		for (int i=0;i<ds.length;i++) {
			if (ds[i]==null) break;
			s+=ds[i]+"\n";
		}
		s+="\nNgay xuat hoa don: "+ngayXuatHoaDon;
		return s;
	}
	
	public long tong() {
		long tong=0;
		for (int i=0;i<ds.length;i++) {
			if (ds[i]==null) break;
			tong+=ds[i].thanhTien();
		}
		return (long)(tong*(1-kh.tiLeGiam()));
	}
	public void inSoTienPhaiTra() {
		System.out.println("Tong so tien khach hang phai tra cho hoa don nay la: "+tong()+"VND");
	}
	
	public String layMaSoHoaDon() {
		return maSo;
	}
	public MyDate layNgayXuatHoaDon() {
		return ngayXuatHoaDon;
	}
	public KhachHang layKhachHang() {
		return kh;
	}
}
