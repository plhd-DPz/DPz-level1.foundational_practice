import java.util.Scanner;

public class QuocGiaPT extends QuocGia{
	static Scanner sc=new Scanner(System.in);
	
	private float ttho;
	private char chluc;
	private float dtich;
	
	public QuocGiaPT() {
		super();
		ttho=0.0f;
		chluc='A';
		dtich=0.0f;
	}
	public QuocGiaPT(QuocGiaPT q) {
		super(q);
		ttho=q.ttho;
		chluc=q.chluc;
		dtich=q.dtich;
	}
	public void nhap() {
		super.nhap();
		System.out.println("Nhap tuoi tho: ");
		ttho=Float.parseFloat(sc.nextLine());
		System.out.println("Nhap chau luc: ");
		chluc=sc.nextLine().charAt(0);
		System.out.println("Nhap dien tich: ");
		dtich=Float.parseFloat(sc.nextLine());
	}
	public void in() {
		super.in();
		System.out.println("Voi tuoi tho: "+ttho+", chau "+chluc+", dien tich "+dtich);
	}
	public String toString() {
		return super.toString()+"\nVoi tuoi tho: "+ttho+", chau "+chluc+", dien tich "+dtich;
	}
	
	public char layChauLuc() {
		return chluc;
	}
	
	public static void main(String[] args) {
		QuocGia ds[];
		System.out.println("Nhap so luong quoc gia trong danh sach: ");
		int n=Integer.parseInt(sc.nextLine());
		ds=new QuocGia[n];
		for (int i=0;i<n;i++) {
			System.out.print("Nhap quoc gia hay quoc gia phat trien? quoc gia(0), quoc gia phat trien(1): ");
			int t=sc.nextInt();
			if (t==0) ds[i]=new QuocGia();
			else ds[i]=new QuocGiaPT();
			ds[i].nhap();
		}
		System.out.println("Danh sach cac quoc gia da nhap la: ");
		for (QuocGia e : ds) e.in();
		
		System.out.println("Ten cac quoc gia co GDP tren 500 den tu chau Phi: ");
		for (QuocGia e : ds) {
			if (e instanceof QuocGiaPT) {
				if (e.layGDP()>=500 && ((QuocGiaPT) e).layChauLuc()=='P') {
					System.out.println(e.layTenQG());
				}
			}
		}
		
		System.out.println("Liet ke GDP trung binh cua cac nuoc phat trien theo chau luc: ");
		float tong[]= {0.0f,0.0f,0.0f,0.0f,0.0f};
		int dem[]= {0,0,0,0,0};
		for (QuocGia e : ds) {
			if (e instanceof QuocGiaPT) {
				char t=((QuocGiaPT) e).layChauLuc();
				switch (t) {
				case 'A':tong[0]+=e.layGDP();dem[0]++;break;
				case 'W':tong[1]+=e.layGDP();dem[1]++;break;
				case 'M':tong[2]+=e.layGDP();dem[2]++;break;
				case 'U':tong[3]+=e.layGDP();dem[3]++;break;
				case 'P':tong[4]+=e.layGDP();dem[4]++;break;
				}
			}
		}
		String chau[]= {"A","Au","My","Uc","Phi"};
		for (int i=0;i<5;i++) {
			System.out.println("GDP trung binh cac nuoc chau "+chau[i]+": "+((dem[i]==0)?0.0f:tong[i]/dem[i]));
		}
	}

}
