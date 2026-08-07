import java.util.Scanner;

public class BNCovid extends BNhan{
	static Scanner sc=new Scanner(System.in);
	
	private String ngay;
	private char loai;
	private String odich;
	private String noi;
	
	public BNCovid() {
		super();
		ngay=new String();
		loai='\0';
		odich=new String();
		noi=new String();
	}
	public BNCovid(BNCovid a) {
		super(a);
		ngay=new String(a.ngay);
		loai=a.loai;
		odich=new String(a.odich);
		noi=new String(a.noi);
	}
	public void nhap() {
		super.nhap();
		System.out.print("Nhap ngay nhiem benh: ");
		ngay=sc.nextLine();
		System.out.print("Nhap loai benh: ");
		loai=sc.nextLine().charAt(0);
		System.out.print("Nhap o dich: ");
		odich=sc.nextLine();
		System.out.print("Nhap noi cach ly: ");
		noi=sc.nextLine();
	}
	public void in() {
		super.in();
		System.out.println("voi ngay nhiem benh: "+ngay+", loai "+loai+", o dich "+odich+", noi cach ly: "+noi);
	}
	public String toString() {
		return super.toString()+"\nvoi ngay nhiem benh: "+ngay+", loai "+loai+", o dich "+odich+", noi cach ly: "+noi;
	}
	public String layODich() {
		return odich;
	}
	public long layNgayNhiemBenh() {
		String s[]=this.ngay.split("-");
		long t=Long.parseLong(s[2]+s[1]+s[0]);
		return t;
	}
	
	public static void main(String[] args) {
		BNhan ds[];
		System.out.println("Nhap so luong benh nhan trong danh sach: ");
		int n=Integer.parseInt(sc.nextLine());
		ds=new BNhan[n];
		System.out.println("Nhap danh sach benh nhan: ");
		for (int i=0;i<n;i++) {
			System.out.println("Nhap benh nhan thu "+(i+1)+": ");
			System.out.println("Benh nhan(0) hay benh nhan covid(1)? ");
			int t=Integer.parseInt(sc.nextLine());
			if (t==0) ds[i]=new BNhan();
			else ds[i]=new BNCovid();
			ds[i].nhap();
		}
		
		System.out.println("Danh sach benh nhan da nhap: ");
		for (BNhan e : ds) e.in();
		
		System.out.println("Liet ke ho ten benh nhan tai o dich \"Cong ty Hosiden\": ");
		for (BNhan e : ds) {
			if (e instanceof BNCovid) {
				if (((BNCovid) e).layODich().equals("Cong ty Hosiden")) {
					System.out.println(e.layHoTen());
				}
			}
		}
		
		System.out.println("Liet ke cac benh nhan het thoi gian cach ly den ngay 18-05-2021: ");
		long moc=20210518-14;  
		for (BNhan e : ds) {
		    if (e instanceof BNCovid) {
		        if (((BNCovid)e).layNgayNhiemBenh() <= moc) e.in();
		    }
		}
		
	}

}
