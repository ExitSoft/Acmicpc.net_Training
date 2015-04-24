import java.util.*;

public class t9012{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int loop = s.nextInt();
		String text;
		Stack mystack = new Stack();
		for(int i = 0; i < loop; i++){
			text = s.next();
			for(int j = 0; j < text.length; j++){
				if(text.charAt(j).equals("(")){
					mystack.push("(");
				}
				else{
					if(!mystack.isEmpty()){
						mystack.pop();
					}
					else{
						mystack.push(")");
						break;
					}
				}
			}
		}
	}
}