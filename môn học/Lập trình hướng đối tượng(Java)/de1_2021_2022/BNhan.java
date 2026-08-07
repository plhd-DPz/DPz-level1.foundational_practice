import java.util.Scanner;

public class BNhan {
	static Scanner sc=new Scanner(System.in);
	
	private String hten;
	private boolean gtinh;
	private int nsinh;
	private float cnang;
	
	public BNhan() {
		hten=new String();
		gtinh=true;
		nsinh=0;
		cnang=0.0f;
	}
	public BNhan(BNhan a) {
		hten=new String(a.hten);
		gtinh=a.gtinh;
		nsinh=a.nsinh;
		cnang=a.cnang;
	}
	public void nhap() {
		System.out.print("Nhap ho ten benh nhan: ");
		hten=sc.nextLine();
		System.out.print("Nhap gioi tinh benh nhan: ");
		gtinh=Boolean.parseBoolean(sc.nextLine());
		System.out.print("Nhap nam sinh benh nhan: ");
		nsinh=Integer.parseInt(sc.nextLine());
		System.out.print("Nhap can nang benh nhan: ");
		cnang=Float.parseFloat(sc.nextLine());
	}
	public void in() {
		System.out.println("Benh nhan "+hten+": gioi tinh "+(gtinh?"nam":"nu")+", nam sinh: "+nsinh+", can nang: "+cnang);
	}
	public String toString() {
		return "Benh nhan "+hten+": gioi tinh "+(gtinh?"nam":"nu")+", nam sinh: "+nsinh+", can nang: "+cnang;
	}
	public String layHoTen() {
		return hten;
	}
	
	public static void main(String[] args) {
		BNhan bn1=new BNhan();
		System.out.println("Nhap thong tin benh nhan 1: ");
		bn1.nhap();
		System.out.println("Thong tin benh nhan 1 da nhap: ");
		bn1.in();
		BNhan bn2=new BNhan(bn1);
		System.out.println("Thong tin benh nhan 2 da sao chep: ");
		bn2.in();
	}
}
