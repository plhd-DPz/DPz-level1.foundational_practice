package buoi4BaiTapThem;

public class KhachHangSinhHoat extends KhachHang{

	@Override
	public double tinhTien(int sanLuong) {
		if (sanLuong<100) return sanLuong*2000;
		return 100*2000 + (sanLuong-100)*3000;
	}

}
