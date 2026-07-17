package buoi1;

public class TongDaySo {

	public static void main(String[] args) {
		double tong=0, f=0, max=Double.MIN_VALUE;
		for (String e : args) {
			try {
				f=Double.parseDouble(e);
			}
			catch(NumberFormatException ex) {
				f=0;
			}
			tong+=f;
			if (max<f) max=f;
		}
		System.out.println("Tong = " + tong);
		System.out.println("So lon nhat = " + max);
	}

}