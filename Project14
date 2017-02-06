
public class EulerProject14 {
	
	// Method that accepts start value for Collatz sequence and returns the number
	// of steps until that sequence reaches 1
	private static int collatzLength(long start){
		int length = 1;
	
		while(start > 1){
			if(start % 2 == 0){
				start = start/2; 
				length++;
			}
			else{
				start = 3*start + 1; 
				length++;
			}
		}
		
		return length;
	}

// Testing start values less than 1 million that produces the longest Collatz sequence.
// (Answer is 837799)

	public static void main(String[] args) {
		int maxLength = 1;
		long startInt, bestIndex = 1;
		
		for (startInt = 2; startInt < Math.pow(10, 6); startInt++) {
			if(collatzLength(startInt) > maxLength){
				maxLength = collatzLength(startInt);
				bestIndex = startInt;
			}
		}
		System.out.println("Starting at " + bestIndex + " yields the longest Collatz"
				+ " sequence with a length of " + maxLength + ".");
	}
}
