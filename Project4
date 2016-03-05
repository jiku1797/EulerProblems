
public class Proj4 {

	public static void main(String[] args) {
		System.out.println(largestPalindrome());

	}
	
	private static int largestPalindrome(){
		int maxPal = 1;
		for(int i=999; i>99;i--){
			for(int j=999; j>99;j--){
				int prod = i*j;
				//System.out.println(prod);
				if(isPalindrome(prod)){
					//System.out.println(prod + " Faktorer: "+i + " och "+j+"\n");
					if(Math.max(maxPal, prod) > maxPal){
						maxPal = prod;
					}
				}		
			}
		}
		return maxPal;
	}
	
	private static boolean isPalindrome(int n){
		boolean isPal = false;
		
		//test 5 digit numbers
		if(n > 9999 && n < 100000){
			int unit, tenth, hundred, thousand, tenThousand;
			tenThousand = n/10000;
			n = n%10000;
			thousand = n/1000;
			n = n%1000;
			hundred = n/100;
			n = n%100;
			tenth = n/10;
			unit = n%10;
			
			if(unit == tenThousand && thousand == tenth) isPal=true;
		}
		
		//test 6 digit numbers
		if(n>99999 && n<1000000){
			int unit, tenth, hundred, thousand, tenThousand, hundredThousand;
			hundredThousand = n/100000;
			n = n%100000;
			tenThousand = n/10000;
			n = n%10000;
			thousand = n/1000;
			n = n%1000;
			hundred = n/100;
			n = n%100;
			tenth = n/10;
			unit = n%10;
			
			if(unit == hundredThousand && tenth == tenThousand && hundred == thousand) isPal = true;
		}
		
		return isPal;
	}

}
