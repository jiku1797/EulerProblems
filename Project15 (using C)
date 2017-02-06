//  C solution of Euler project #15
//  Created by Jimmy Kungsman on 2017-02-06.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <stdio.h>
#include <stdlib.h>


long paths(int gridSize){
    
    long numPaths[gridSize + 1][gridSize + 1];  //number of paths on a (gridSize)x(gridSize) grid
    
    
    /* Initialize the numPaths array with boundary values. Only 1 possibility to get to node of form
     (0,i) or (i,0). */
    
    for(int i=0; i<=gridSize; i++){
        numPaths[0][i] = 1;
        numPaths[i][0] = 1;
    }
    
    //Dynamic calculation of the number of paths
    for(int i=0; i<gridSize; i++){
        for(int j=0; j<gridSize; j++){
            numPaths[i+1][j+1] = numPaths[i][j+1] + numPaths[i+1][j]; //2 ways to (i+1,j+1) using 1 move
        }
    }
    
    return numPaths[gridSize][gridSize];
    
}

int main() {
    printf("Give a grid size: \n"); //Input size of grid
    char size[2];
    fgets(size, 4, stdin);
    long n = paths(atoi(size));
    
    printf("There are %ld different paths!\n\n", n);
    exit(0);
}
