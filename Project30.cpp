//  Created by Jimmy Kungsman on 2017-03-31.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.
//  Easy to see such a number is bounded from above by 10^6.

#include <iostream>
#include <cmath>
using namespace std;

int* getDigits(int n, int digits[6]){
    if(n > pow(10,6) - 1){return digits;}
    
    int prev = n ;
    
    for(int i=0; i<6; i++){
        digits[i] = prev % 10;
        prev = (prev - digits[i]) / 10;
    }
    
    return digits;
}

int sumOfFifthPowersOfDigits(int n){
    int sum = 0;
    int digitsOfNum[6];
    getDigits(n, digitsOfNum);
    for(int digit : digitsOfNum){
        sum += pow(digit,5);
    }
    return sum;
}

int main() {
    
    int i = 2; //1 not included
    int sum = 0;
    
    while(i < pow(10,6)){
        if(i == sumOfFifthPowersOfDigits(i)){
            sum += i;
        }
        i++;
    }
    cout << sum << endl;
    return 0;
}
