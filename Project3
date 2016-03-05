import java.math.BigInteger;

public class Proj3 {

	public static void main(String[] args) {
		BigInteger num = new BigInteger("600851475143");
		System.out.println(largestPrime(num).toString());
	}
	
	private static BigInteger largestPrime(BigInteger n){
		BigInteger maxPrimeDiv = new BigInteger("1");
		BigInteger i= new BigInteger("3");
		while(n.compareTo(BigInteger.ONE) == 1){
			while(n.mod(i).equals(BigInteger.ZERO)){
				n = n.divide(i);
				maxPrimeDiv = i;
				
			}
			i = i.add(new BigInteger("2"));
		}
		return maxPrimeDiv;
	}

}
