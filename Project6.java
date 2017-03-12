
public class Proj6 {

	public static void main(String[] args) {
		long diff = squaredSum() - sumOfSquares();
		System.out.println(diff);

	}
	
	private static long sumOfSquares(){
		long sum = 0;
		for(int i=1; i<=100; i++){
			sum += i*i;
		}
		return sum;
	}
	
	private static long squaredSum(){
		long sum = 0;
		
		for(int i=1; i<=100; i++){
			sum += i;
		}
		
		return sum*sum;
	}

}
