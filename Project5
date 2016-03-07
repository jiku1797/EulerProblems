
public class Proj5 {

	public static void main(String[] args) {
		long prodAll = 1;
		
		
		for(long i=2; i<=20; i++){
			prodAll *= i;
		}
		
		System.out.println(smallest(prodAll));

	}
	
	private static boolean isDivisible(long n){
		boolean isDivisible = false;
		for(int i=2; i<=20; i++){
			if(n%i == 0){
				isDivisible = true;
			}
			else{
				isDivisible = false;
				return isDivisible;
			}
		}
		return isDivisible;
	}
	
	private static long smallest(long n){
		for(int i=2; i<=20; i++){
			if(isDivisible(n/i)){
				n/=i;
			}
		}
		return n;
	}

}
