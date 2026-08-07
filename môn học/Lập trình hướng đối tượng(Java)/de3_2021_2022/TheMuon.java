import java.util.Scanner;

public class TheMuon {
	static Scanner sc=new Scanner(System.in);
	
	private BDoc bdoc;
	private int mst;
	private String nmuon;
	private String ntra;
	
	public TheMuon() {
		bdoc=new BDoc();
		mst=0;
		nmuon=new String();
		ntra=new String();
	}
	public TheMuon(TheMuon t) {
		bdoc=new BDoc(t.bdoc);
		mst=t.mst;
		nmuon=new String(t.nmuon);
		ntra=new String(t.ntra);
	}
	public void nhap() {
		System.out.println("Nhap thong tin ban doc: ");
		bdoc.nhap();
		System.out.println("Nhap ma so the: ");
		mst=Integer.parseInt(sc.nextLine());
		System.out.println("Nhap ngay muon: ");
		nmuon=sc.nextLine();
		System.out.println("Nhap ngay tra: ");
		ntra=sc.nextLine();
	}
	public void xuat() {
		System.out.println("ban doc: \n"+bdoc+"\n voi ma so the: "+mst+", ngay muon: "+nmuon+", ngay tra: "+ntra);
	}
	public String toString() {
		return "ban doc: \n"+bdoc+"\n voi ma so the: "+mst+", ngay muon: "+nmuon+", ngay tra: "+ntra;
	}
	
	public int soNgay(int m, int y) {
		int ngay[]= {31,28,31,30,31,30,31,31,30,31,30,31};
		if (m==2 && ((y%4==0 && y%100!=0) || y%400==0)) {
			return 29;
		}
		return ngay[m-1];
	}
	public int tongNgay(String s) {
		String a[]=s.split("-");
		int d=Integer.parseInt(a[0]);
		int m=Integer.parseInt(a[1]);
		int y=Integer.parseInt(a[2]);
		
		int tong=0;
		int nam=y-1;
		tong+=nam*365;
		tong+=nam/4;
		tong-=nam/100;
		tong+=nam/400;
		for (int i=1;i<m;i++) {
			tong+=soNgay(i,y);
		}
		tong+=d;
		return tong;
	}
	
	public int soNgayMuon() {
		return tongNgay(ntra)-tongNgay(nmuon);
	}
	public BDoc layBDoc() {
		return bdoc;
	}
	
	public static void main(String[] args) {
		TheMuon ds[];
		System.out.println("Nhap so luong the muon trong danh sach: ");
		int n=Integer.parseInt(sc.nextLine());
		ds=new TheMuon[n];
		System.out.println("Nhap danh sach the muon: ");
		for (int i=0;i<n;i++) {
			ds[i]=new TheMuon();
			ds[i].nhap();
		}
		
		System.out.println("Danh sach the muon da nhap: ");
		for (TheMuon e : ds) e.xuat();
		
		System.out.println("Danh sach ma so ban doc co so ngay muon hon 30 ngay: ");
		for (TheMuon e : ds) {
			if (e.soNgayMuon()>30) System.out.println(e.layBDoc().layMaSoBD());
		}
		
		System.out.print("Ten ban doc co so ngay muon lau nhat: ");
		TheMuon max=ds[0];
		for (TheMuon e : ds) {
			if (e.soNgayMuon()>max.soNgayMuon()) max=e;
		}
		System.out.println(max.layBDoc().layTenBD());
		
	}

}
