public class Problem12 {

	public static void main(String[] args) {
		//search the triangular numbers until it has 500 divisors
		int i = 1;
		while(true){
			int triNum = nThTriangularNum(i);
			int numDiv = numDivisors(triNum);
			if(numDiv > 500){
				System.out.println("Minsta triangulära talet med 500 delare är "+triNum);
				System.exit(0);
			}
			i++;
		}

	}
	
	private static int nThTriangularNum(int n){
		int t = n*(n+1)/2;
		return t;
	}
	
	private static int numDivisors(int n){
		int count = 0;
		while(n % 2 == 0){
			n = n/2;
			count ++;		
		}
		int divisors = count + 1;
		
		int p = 3;
	    while(n != 1){
	    	count = 0;
	    	while(n % p == 0){
	    		n = n/p;
	    		count++;
	    	}
	    	divisors = divisors*(count + 1);
	    	p += 2;
	    }
	    return divisors;
	}

}
