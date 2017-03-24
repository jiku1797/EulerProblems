
//  Solution to Euler project #28. Starting with 1 we fill
//  a square using successive integers and moving clockwise,
//  so in the 3x3 case we would get
//      7 8 9
//      6 1 2
//      5 4 3
//  The problem is to find the sum of all integers along the
//  two diagonals. Clearly this equals the diagonal sum of the
//  previous matrix with the addition of the new corner elements!
//  Created by Jimmy Kungsman on 2017-03-24.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
using namespace std;

int calculate(int n){
    if(n == 0){return 1;}
    return calculate(n-1) + 16*n*n + 4*n + 4;
}

int main() {
    cout << calculate(500) << endl;
    
    return 0;
}
