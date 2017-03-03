/*  Solution to Euler project #25. The solution is based on Binets formula and the fact that
*   phi^{-n} tends to 0 when n tends to infinity.
*/
//  Created by Jimmy Kungsman on 2017-03-03.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double phi = (1 + sqrt(5))/2;
    
    int n = 10;
    int numDigits;
    
    while(numDigits < 1000){
        numDigits = (int) (n*log10(phi) - log10(5)/2 +  1);
        n++;
    }
    
    cout << "First 1000 digit Fibonacci number has index " << n - 1 << endl;
    
    return 0;
}
