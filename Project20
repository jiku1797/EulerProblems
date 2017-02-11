/*
 * Program to compute the sum of the digits of 100 factorial. 
 */

import java.math.BigInteger;
import java.util.Iterator;

public class Euler20 {
	
	// Calculate n factorial
	public static BigInteger factorial(int n){
		BigInteger fac = BigInteger.valueOf(n);
		for (int i = n; i>1; i--) {
			fac = fac.multiply(BigInteger.valueOf(i-1));
		}
		
		return fac;
	}
	// Summing digits of an integer
	public static int sumDigits(BigInteger n){
		int sum = 0;
		
		while(n.compareTo(BigInteger.ZERO) == 1){
			sum += (n.mod(BigInteger.valueOf(10))).intValue();
			n = n.divide(BigInteger.valueOf(10));
		}
		
		return sum;
	}

/* 	Just testing how much memory 100! uses. Not needed for program to run.  
	public static void numBits(){
		
		int bits = 0;
		for (int i = 2; i < 101; i++) {
			bits += Math.log(i)/Math.log(2);
			
		}
		System.out.println("Number of bits is: " + bits);
	}
*/
	public static void main(String[] args) {
		int num = 100;
		System.out.println("Sum of digits of " + num  
				+"! is " + sumDigits(factorial(num)));
		//numBits(); 
	}

}
