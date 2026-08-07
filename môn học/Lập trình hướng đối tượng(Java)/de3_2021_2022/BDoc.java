import java.util.Scanner;

public class BDoc {
	
	static Scanner sc=new Scanner(System.in);
	
	private int msbd;
	private String tenbd;
	private String nsinh;
	private boolean VIP;
	
	public BDoc() {
		msbd=0;
		tenbd=new String();
		nsinh=new String();
		VIP=false;
	}
	public BDoc(BDoc b) {
		msbd=b.msbd;
		tenbd=new String(b.tenbd);
		nsinh=new String(b.nsinh);
		VIP=b.VIP;
	}
	public void nhap() {
		System.out.println("Nhap ma so ban doc: ");
		msbd=Integer.parseInt(sc.nextLine());
		System.out.println("Nhap ten ban doc: ");
		tenbd=sc.nextLine();
		System.out.println("Nhap ngay sinh: ");
		nsinh=sc.nextLine();
		System.out.println("Ban doc lau nam hay khong: ");
		VIP=Boolean.parseBoolean(sc.nextLine());
	}
	public void xuat() {
		System.out.println("Ban doc "+msbd+", ten "+tenbd+", ngay sinh "+nsinh+", lau nam: "+(VIP?"co":"khong"));
	}
	public String toString() {
		return "Ban doc "+msbd+", ten "+tenbd+", ngay sinh "+nsinh+", lau nam: "+(VIP?"co":"khong");
	}
	public int layMaSoBD() {
		return msbd;
	}
	public String layTenBD() {
		return tenbd;
	}

	public static void main(String[] args) {
		BDoc bd1=new BDoc();
		System.out.println("Nhap thong tin ban doc 1: ");
		bd1.nhap();
		System.out.println("Thong tin ban doc 1: ");
		bd1.xuat();
		BDoc bd2=new BDoc(bd1);
		System.out.println("Thong tin ban doc 2: "+bd2);
	}

}
