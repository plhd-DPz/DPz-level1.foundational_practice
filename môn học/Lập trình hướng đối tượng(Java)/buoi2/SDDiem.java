package buoi2;

public class SDDiem {

	public static void main(String[] args) {
		Date a=new Date(8,6,2026);
		System.out.println("Ngay a: "+a);
		Date b=new Date();
		b.nhap();
		b.in();
		System.out.println("ngay sau khi cong 32000 ngay: ");
		b=b.cong(32000);
		b.in();
	}

}
