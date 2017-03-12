
public class Proj7 {

	public static void main(String[] args) {
		System.out.println(nThPrime(10001));	

	}
	
	private static int nThPrime(int n){
		int count = 1;
		int i = 3;
		
		while(count < n){
			if(isPrime(i)){
				count++;
			}
			i+=2;
		}
		return i-2;
	}
	
	private static boolean isPrime(int n){
		boolean isPrime = true;
		
		int i = 2;
		while(i<n){
			if(n%i == 0){
				isPrime = false;
				return isPrime;
			}
			i++;
		}
		return isPrime;
	}

}
