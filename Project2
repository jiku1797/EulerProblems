
public class Proj2 {
	public static void main(String[] args){
		System.out.println(sumOfEvenFibo());
	}
	
	private static int sumOfEvenFibo(){
		int i = 0;
		int upperLimit = 4000000;
		int sum = 0;
		while(fibo(i) < upperLimit){
			if(fibo(i)%2==0){
				sum+=fibo(i);
			}
			i++;
		}
		return sum;
	}
	
	private static int fibo(int n){
		if(n==0) return 0;
		if(n==1) return 1;
		else{
			int secLast = 0;
			int last = 1;
			int fib = 1;
			int i = 2;
			while(i<=n){
				fib = secLast + last;
				secLast = last;
				last = fib;
				i++;
			}
			return fib;
		}
	}
}
