import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;

public class Proj11 {

	public static void main(String[] args) {
		int[][] matrix = null;

        try {
            matrix = create2DIntMatrixFromFile("numArr.txt");
        } catch (Exception e) {
            e.printStackTrace();
        }
        
        System.out.println(vertical(matrix));
        System.out.println(horizontal(matrix));
        System.out.println(diagonalTopLeft(matrix));
        System.out.println(diagonalTopRight(matrix));
	}
	
	private static int vertical(int[][] matrix){
		int prod = 1;
		int maxProd = 1;
		for(int i=0;i<16;i++){
			for(int j=0;j<20;j++){
				prod = matrix[i][j]*matrix[i+1][j]*matrix[i+2][j]*matrix[i+3][j];
				if(prod>maxProd)maxProd = prod;
			}
		}
		return maxProd;
	}
	
	private static int horizontal(int[][] matrix){
		int prod = 1;
		int maxProd = 1;
		for(int i=0;i<20;i++){
			for(int j=0;j<16;j++){
				prod = matrix[i][j]*matrix[i][j+1]*matrix[i][j+2]*matrix[i][j+3];
				if(prod>maxProd)maxProd = prod;
			}
		}
		return maxProd;
	}
	
	private static int diagonalTopLeft(int[][] matrix){
		int prod = 1;
		int maxProd = 1;
		for(int i=0;i<17;i++){
			for(int j=0;j<17;j++){
				prod = matrix[i][j]*matrix[i+1][j+1]*matrix[i+2][j+2]*matrix[i+3][j+3];
				if(prod>maxProd)maxProd = prod;
			}
		}
		return maxProd;
	}
	
	private static int diagonalTopRight(int[][] matrix){
		int prod = 1;
		int maxProd = 1;
		for(int i=0;i<17;i++){
			for(int j=3;j<20;j++){
				prod = matrix[i][j]*matrix[i+1][j-1]*matrix[i+2][j-2]*matrix[i+3][j-3];
				if(prod>maxProd)maxProd = prod;
			}
		}
		return maxProd;
	}
	
	int[][] numArr = null;
			
	public static int[][] create2DIntMatrixFromFile(String filename) throws Exception {
    int[][] matrix = null;

    // If included in an Eclipse project.
    InputStream stream = ClassLoader.getSystemResourceAsStream(filename);
    BufferedReader buffer = new BufferedReader(new InputStreamReader(stream));

    // If in the same directory 
    // Just comment out the 2 lines above this and uncomment the line
    // that follows.
    //BufferedReader buffer = new BufferedReader(new FileReader(filename));

    String line;
    int row = 0;
    int size = 0;

    while ((line = buffer.readLine()) != null) {
        String[] vals = line.trim().split("\\s+");

        // Lazy instantiation.
        if (matrix == null) {
            size = vals.length;
            matrix = new int[size][size];
        }

        for (int col = 0; col < size; col++) {
            matrix[row][col] = Integer.parseInt(vals[col]);
        }

        row++;
    }

    return matrix;
}

}
