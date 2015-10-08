import java.util.*;

class P11024{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int nCount = Integer.parseInt(s.nextLine());

		for(int n = 0; n < nCount; n++){
			String input = s.nextLine();
			String inputs[] = input.split(" ");

			int sum = 0;
			for(int i = 0; i < inputs.length; i++){
				sum += Integer.parseInt(inputs[i]);
			}
			System.out.println(sum);	
		}
		

	}
}