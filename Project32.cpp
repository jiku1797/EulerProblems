//  Created by Jimmy Kungsman on 2017-04-03.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

/*
 We shall say that an n-digit number is pandigital if it makes use of all the digits 1 to n exactly once; for example, the 5-digit number, 15234, is 1 through 5 pandigital.
 
 The product 7254 is unusual, as the identity, 39 × 186 = 7254, containing multiplicand, multiplier, and product is 1 through 9 pandigital.
 
 Find the sum of all products whose multiplicand/multiplier/product identity can be written as a 1 through 9 pandigital.
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <cmath>
#include <set>

using namespace std;

vector<int> getDigits(int n){
    int tmp = 10*n;
    int digit = 0;
    vector<int> digits;
    
    while(tmp - digit> 0){
        tmp = (tmp - digit) / 10;
        digit = tmp % 10;
        digits.push_back(digit);
    }
    return digits;
}

vector<int> appendVector(vector<int> u, vector<int> v){
    u.reserve(u.size() + v.size());
    u.insert(u.end(), v.begin(), v.end());
    v.clear();
    return u;
}

bool isPanDigitProduct(int i,int j){
    int product = i*j;
    int sum = 0;
    vector<int> comparison = {1,2,3,4,5,6,7,8,9};
    
    vector<int> allDigits = appendVector(getDigits(i), getDigits(j));
    allDigits = appendVector(allDigits, getDigits(product));
    
    for(int i : allDigits){
        sum += i;
    }
    
    if(allDigits.size() == 9){
        sort(allDigits.begin(), allDigits.end());
        if(allDigits == comparison){
            return true;
        }
    }
    return false;
}

set<int> panDigitProductSet(){
    set<int> panDigitProducts;
    
    for(int i=2; i<10000; i++){
        for(int j=2; j<10000/i; j++){
            if(isPanDigitProduct(i,j)){
                panDigitProducts.insert(i*j);
            }
        }
    }
    return panDigitProducts;
}

int main(){
    int sum = 0;
    
    set<int> panDigitProducts = panDigitProductSet();
    
    for(int panDigitProd : panDigitProducts){
        sum += panDigitProd;
    }
    cout << sum << endl;
}
