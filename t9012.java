import java.util.*;

public class t9012{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int loop = s.nextInt();
		String text;
		ArrayList<String> s_list = new ArrayList<String>();

		for(int i = 0; i < loop; i++){
			text = s.next();
			s_list.add(text);
		}

		for(int i = 0; i < loop; i++){
			Stack mystack = new Stack();
			for(int j = 0; j < s_list.get(i).length(); j++){
				if(s_list.get(i).charAt(j) == '('){
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
			// System.out.println(mystack);
			if(mystack.isEmpty()){
				System.out.println("Yes");
			}
			else{
				System.out.println("No");
			}
		}


	}
}