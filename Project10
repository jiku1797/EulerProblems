
public class Proj10 {

	public static void main(String[] args) {
		long sum = 0;
		for(int i=2;i<2000000;i++){
			if(isPrime(i)) sum+=i;
		}
		System.out.println("Summan är: "+sum);
	}
	
private static boolean isPrime(int n){
	boolean isPrime = false;
	if(n==2){
		isPrime = true;
		return isPrime;
	}
	if(n%2==0) return isPrime;
	int max = (int)Math.ceil(Math.sqrt(n));
	for(int i=3;i<=max;i+=2){
		if(n%i==0) return isPrime;
	}
	isPrime = true;
	return isPrime;
}

}
