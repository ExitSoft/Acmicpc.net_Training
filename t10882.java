
import java.util.*;

class t10882{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int n = s.nextInt();
		String time = s.next();
		String time2 = s.next();

		int minute = 0;
		minute += Integer.parseInt(time.substring(0,2))*60 + Integer.parseInt(time.substring(3));
		Float t = Float.parseFloat(time2.substring(4)) * 60;

		if(time2.charAt(3) == '+'){
			minute -= t;
		}
		else if(time2.charAt(3) == '-'){
			minute += t;
		}

		for(int i= 0; i < n; i++){
			int tmp_minute = minute;
			String tmp = s.next();
			Float tmp_t = Float.parseFloat(tmp.substring(4)) * 60;

			if(tmp.charAt(3) == '+'){
				tmp_minute += tmp_t;
			}
			else if(tmp.charAt(3) == '-'){
				tmp_minute -= tmp_t;
			}

			int hh = tmp_minute / 60;
			int mm = tmp_minute % 60;

			if(hh >= 24){
				hh -= 24;
			}
			else if(hh < 0){
				hh += 24;
			}

			if(hh < 10){
				System.out.print("0"+hh+":");
			}
			else{
				System.out.print(hh+":");
			}

			if(mm < 10){
				System.out.println("0"+mm);
			}
			else{
				System.out.println(mm);	
			}
		}

		// System.out.println(minute);




	}
}