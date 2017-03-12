/*  A positive integer is called abundant if the sum of all its proper divisors is larger than the
*   number itself. We are asked to compute the sum of all positive integers that cannot be written 
*   as a sum of two abundant numbers.
*   We are given that one can prove that all integers greater than 28123 can be represented as a sum
*   of two abundant numbers, so need only consider smaller positive integers.
*/

//  Created by Jimmy Kungsman on 2017-03-01.
//  Copyright © 2017 Jimmy Kungsman.

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int sumPropDiv(int n){
    int max = sqrt(n);  //Only look for factors less than the square root
    int sum = 1;    //1 a factor of all integers
    
    for(int i=2; i<=max; i++){
        if(n%i == 0){
            sum += i;
            int d = n/i;
            sum = (d == i) ? sum : sum + d; //Add complement factor unless uqual
        
        }
    }
    return sum;
}

bool isAbundant(int n){
    if(sumPropDiv(n) > n) return true;
    return false;
}

bool isSumOfTwoAbundant(int n){
    for(int i=12; i<= n/2; i++){
        if(isAbundant(i) && isAbundant(n - i)) return true; //Test for abundance
    }
    return false;
}

int sumNotSumOfAbundant(){
    int sum = 0;
    for(int i=1; i<28124; i++){ //We are given that every integer >28124 is a sum of 2 abundant numbers
        if(!isSumOfTwoAbundant(i)) sum += i;
    }
    return sum;
}


int main(int argc, const char * argv[]) {
    cout << sumNotSumOfAbundant() << endl;
    return 0;
}
