/*
 	*Java solution of Euler problem #18 that finds the largest sum of a triangular 
 	*arrangement of integers where the sum can only combine an integer with its 
 	*adjacent neighbors in the row below. The actual integers are found in the 
 	*separate file "triangularIntegers.txt".  	
*/

import java.io.File;
import java.util.Scanner;

public class Project18 {

	// Reads external file of integer values "triangularIntegers.txt" into a 2D array 
	public static int[][] readFile() throws Exception
	{
		File file = new File("triangularIntegers");
	    Scanner scan = new Scanner(file);

	    int[][] triangle = new int[15][15] ;
	    int i = 0;
	    String line;
	    while(scan.hasNext()){
	        line = scan.nextLine();
	        String[] numbers = line.split(" ");

	        for(int j = 0; j < numbers.length; j++)
	        {
	            triangle[i][j] = Integer.parseInt(numbers[j]);
	        }
	        i++;
	    }
	    scan.close();
	    return triangle;
	}

	public static void main(String[] args) throws Exception {
		//Initiate matrix representation of the triangular integers
		int[][] lines = readFile();
		
		//Replace bottom row by maximum sum of adjacent parent, 
		//thereby reducing the length of that row by 1 each iteration
		for (int i = lines.length-2; i >= 0; i--) {
			for (int j = 0; j < i+1; j++) {
				lines[i][j] += Math.max(lines[i+1][j], lines[i+1][j+1]);
			}
		}
		System.out.println("Largest sum is " + lines[0][0]);
	}

}
