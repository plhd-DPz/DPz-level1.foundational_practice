import java.util.Scanner;

public class QuocGia {
	static Scanner sc=new Scanner(System.in);
	
	private String msqg, tenqg, tenthudo;
	private float GDP;
	
	public QuocGia() {
		msqg=new String();
		tenqg=new String();
		tenthudo=new String();
		GDP=0.0f;
	}
	public QuocGia(QuocGia q) {
		msqg=new String(q.msqg);
		tenqg=new String(q.tenqg);
		tenthudo=new String(q.tenthudo);
		GDP=q.GDP;
	}
	public void nhap() {
		System.out.println("Nhap ma so quoc gia: ");
		msqg=sc.nextLine();
		System.out.println("Nhap ten quoc gia: ");
		tenqg=sc.nextLine();
		System.out.println("Nhap ten thu do: ");
		tenthudo=sc.nextLine();
		System.out.println("Nhap GDP: ");
		GDP=Float.parseFloat(sc.nextLine());
	}
	public void in() {
		System.out.println("Quoc gia so "+msqg+": "+tenqg+", thu do "+tenthudo+", GDP: "+GDP);
	}
	public String toString() {
		return "Quoc gia so "+msqg+": "+tenqg+", thu do "+tenthudo+", GDP: "+GDP;
	}
	
	public float layGDP() {
		return GDP;
	}
	public String layTenQG() {
		return tenqg;
	}
	
	public static void main(String[] args) {
		QuocGia qg1=new QuocGia();
		System.out.println("Nhap thong tin quoc gia 1: ");
		qg1.nhap();
		System.out.println("Thong tin quoc gia 1: ");
		qg1.in();
		QuocGia qg2=new QuocGia(qg1);
		System.out.println("Thong tin quoc gia 2 sao chep tu quoc gia 1: ");
		qg2.in();
	}

}
