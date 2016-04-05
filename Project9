
public class Proj9 {

	public static void main(String[] args) {
		int max=1000;
		int[] arr;
		for(int i=2;i<max;i++){
			for(int j=2;j<=i;j++){
					arr = squareTriple(j,i);
					if(isPyth(arr)){
						if(arr[0]+arr[1]+arr[2]==1000){
							System.out.println("Found "+arr[0]+", "+arr[1]+", " +arr[2]);
							System.out.println("Poduct is " + arr[0]*arr[1]*arr[2]);
							System.exit(0);
						}
					}
				}
			}
		System.out.println("No match found!");
		}
	
	private static boolean isSquare(int num){
		boolean isSquare = false;
		if(Math.sqrt(num)*Math.sqrt(num) == num)isSquare = true;
		return isSquare;
	}
	
	private static int[] squareTriple(int a, int b){
		int[] arr = new int[3];
		arr[0] = a;
		arr[1] = b;
		arr[2] = a*a+b*b; 
		return arr;
	}
	
	private static boolean isPyth(int[] arr){
		boolean isPyth = false;
		int a = arr[0];
		int b = arr[1];
		double c = Math.sqrt(a*a + b*b);
		
		if((c%1) == 0){
			int d = (int)c;
			arr[0] = a;
			arr[1] = b;
			arr[2] = d; 
			isPyth = true;
		}
		return isPyth;
	}

}
