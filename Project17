// Java solution to Euler problem #17 that calculates the total number of letters 
// used in numbers 1 to 1000. 

public class Project17 {

	public static void main(String[] args) {
		String[] oneToNine = {"one", "two", "three", "four", "five", "six",
				"seven", "eight", "nine"};
		
		int sumOneToNine = 0;
		
		for(String s: oneToNine) sumOneToNine += s.length();
		
		String[] tenToNineteen = {"ten", "eleven", "twelve", "thirteen", "fourteen",
				"fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
		
		int sumTenToNineteen = 0;
		
		for(String s: tenToNineteen) sumTenToNineteen += s.length();
		
		// summing letters in 20-99
		int sum20To99 = 10*(6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) + 8*sumOneToNine;
		
		//summing letters in 100-999
		int sum100To999 = sumOneToNine*100; //number of hundreds 
		sum100To999 += 9*99*10; //"hundred and..."
		sum100To999 += 7*9; //"hundred"
		sum100To999 += 9*(sumOneToNine + sumTenToNineteen + sum20To99);//letter in 1-99 occurring 9 times
		
		//summing up
		int sum = sumOneToNine + sumTenToNineteen + sum20To99 + sum100To999 + 11; //also add "one thousand"
		
		System.out.println(sum);
	}
}
