//  Created by Jimmy Kungsman on 2017-03-22.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <vector>

bool isPrime(int n){
    if(n == 2){return true;}
    if(n == 0){return false;}
    if(n < 1){n = -n;}
    
    for(int i=2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    
    return true;
}

int quadraticExpr(int a, int b, int n){
    return n*n + a*n + b;
}

int main() {
    int count = 0;
    int maxCount = 0;
    int n = 0;
    long prod = 1;
    
    for(int a = -999;a < 1000; a++){
        for(int b = -1000;b <= 1000; b++){
            if(!isPrime(b)){continue;}
            count = 0;
            n = 0;
            while(isPrime(quadraticExpr(a, b, n))){
                count++;
                n++;
            }
            if(count > maxCount){
                maxCount = count;
                prod = a*b;
            }
        }
    }
    std::cout << "Maximum product is " << prod
        << " with count of " << maxCount << " primes." << std::endl;
    return 0;
}
