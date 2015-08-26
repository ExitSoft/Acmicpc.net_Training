
import java.util.*;

class Main{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int n = s.nextInt();
		String time = s.next();
		String time2 = s.next();

		int minute = 0;
		minute += Integer.parseInt(time.substring(0,2))*60 + Integer.parseInt(time.substring(3));

		System.out.println(minute);

	}
}