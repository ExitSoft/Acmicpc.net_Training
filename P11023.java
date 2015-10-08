import java.util.*;

class P11023{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		String input = s.nextLine();
		// System.out.println(input.split(" ")[2]);
		String inputs[] = input.split(" ");

		int sum = 0;
		for(int i = 0; i < inputs.length; i++){
			sum += Integer.parseInt(inputs[i]);
			// System.out.println(inputs[i]);
		}
		System.out.println(sum);

	}
}