package buoi2;

public class SDDiem {

	public static void main(String[] args) {
		Diem a=new Diem(3,4);
		System.out.println("Toa do diem a: "+a);
		Diem b=new Diem();
		System.out.println("Nhap toa do diem B: ");
		b.nhap();
		System.out.println("Toa do diem B: "+b);
		Diem c=new Diem(-b.layX(),-b.layY());
		System.out.println("Toa do diem C doi xung voi B qua goc toa do: "+c);
		System.out.println("Khoang cach tu diem B den tam O la: "+b.kcach());
		System.out.println("Khoang cach tu diem A den diem B la: "+a.kcach(b));
	}

}
