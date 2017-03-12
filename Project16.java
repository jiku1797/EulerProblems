// Solution to problem #16 by first treating the large number as a string and then
// converting the individual characters to integers

import java.math.BigInteger;

public class EulerProject16 {

	public static void main(String[] args) {
		BigInteger num = BigInteger.valueOf(2).pow(1000); //2^1000 as a BigInteger
		String numString = num.toString();
		
		int sum = 0;
		
		for(int i=0; i<numString.length(); i++){
			sum += (int)numString.charAt(i) - '0'; //subtract ascii code for 0 to get digits
		}
		
		System.out.println("Sum of digits is: " + sum + "\n");
	} 

}
