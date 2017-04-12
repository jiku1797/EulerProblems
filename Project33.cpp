/*  PROBLEM DESCRIPTION
*   The fraction 49/98 is a curious fraction, as an inexperienced mathematician in attempting to simplify 
*   it may incorrectly believe that 49/98 = 4/8, which is correct, is obtained by cancelling the 9s.
*   We shall consider fractions like, 30/50 = 3/5, to be trivial examples.
*   There are exactly four non-trivial examples of this type of fraction, less than one in value, and containing 
*   two digits in the numerator and denominator.
*
*   If the product of these four fractions is given in its lowest common terms, find the value of the denominator.
*/

//  Created by Jimmy Kungsman on 2017-04-12.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using  namespace std;


// Accepts a fraction a/b in the form (a,b), deletes any common digits in a and b and
// returns the reduced pair.
vector<int> cancelDigits(int num, int den){
    vector<int> numVec = {(num - (num % 10)) / 10, num % 10};
    vector<int> denVec = {(den - (den % 10)) / 10, den % 10};
    vector<int> commonDigit;
    vector<int> reducedFraction(2);
    
    sort(numVec.begin(), numVec.end());
    sort(denVec.begin(), denVec.end());
    
    // obtain intersection as a vector
    vector<int>::iterator commonRange;
    set_intersection(numVec.begin(), numVec.end(), denVec.begin(), denVec.end(), back_inserter(commonDigit));
    set_intersection(numVec.begin(), numVec.end(), denVec.begin(), denVec.end(), back_inserter(commonDigit));
    
    // if non-empty intersection, remove that intersection from both vectors
    if(commonDigit.size() > 0){
        numVec.erase(set_difference(numVec.begin(), numVec.end(), commonDigit.begin(), commonDigit.end(), numVec.begin()), numVec.end());
        denVec.erase(set_difference(denVec.begin(), denVec.end(), commonDigit.begin(), commonDigit.end(), denVec.begin()), denVec.end());
        num = numVec[0];
        den = denVec[0];
    }
    
    reducedFraction = {num, den};
    
    return reducedFraction;
}

int gcd(int a, int b){
    return (b == 0) ? a : gcd(b, a % b);
}

int main() {
    int totNum = 1;
    int totDen = 1;
    int g;
    int totDenlow;
    
    for(int i=10; i<100; i++){
        for(int j=i+1; j<100; j++){
            vector<int> reducedPair = cancelDigits(i, j);
            if(i != reducedPair[0]){// make sure reductions has taken place
                if(i*reducedPair[1] == j*reducedPair[0]){// check whether fractions are equal
                    if((i % 10) != 0 && (j % 10) != 0){ // numerator and denominator cannot both be multiples of 10
                        totNum *= i;
                        totDen *= j;
                    }
                }
            }
        }
    }
    
    g = gcd(totNum, totDen);
    
    totDenlow = totDen/g; // reduce denominator to lowest terms
    cout << totDenlow << endl;
    
    return 0;
}
