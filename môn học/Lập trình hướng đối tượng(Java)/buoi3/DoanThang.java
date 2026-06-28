package buoi3;

import buoi2.Diem;

public class DoanThang implements Cloneable {
	private Diem d1, d2;
	public DoanThang() {
		d1=new Diem();
		d2=new Diem();
	}
	public DoanThang(Diem d11, Diem d22) {
		d1=new Diem(d11);
		d2=new Diem(d22);
	}
	public DoanThang(int ax, int ay, int bx, int by) {
		d1=new Diem(ax,ay);
		d2=new Diem(bx,by);
	}
	public DoanThang(DoanThang dt) {
		d1=new Diem(dt.d1);
		d2=new Diem(dt.d2);
	}
	public void in() {
		System.out.println("["+d1+";"+d2+"]");
	}
	public String toString() {
		return "["+d1+";"+d2+"]";
	}
	public void nhap() {
		System.out.println("Nhập tọa độ d1: "); d1.nhap();
		System.out.println("Nhập tọa độ d2: "); d2.nhap();
	}
	public Object clone() throws CloneNotSupportedException{
		return super.clone();
	}
	public void gan(Diem d11, Diem d22) {
		d1=d11;
		d2=d22;
	}
	public void gan(DoanThang dt) {
		d1=dt.d1;
		d2=dt.d2;
	}
	public void tinhTien(int dx, int dy) {
		d1.tinhTien(dx, dy);
		d2.tinhTien(dx, dy);
	}
	public float doDai() {
		return d1.kcach(d2);
	}
	public float goc() {
		int dx = d2.layX() - d1.layX();
	    int dy = d2.layY() - d1.layY();
	    float goc=(float)Math.toDegrees(Math.atan2(dy, dx));
	    if (goc<0) goc+=360;
	    return goc;
	}
}
