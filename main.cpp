//  Euler project #26. This is a pogram for finding the integer
//  n with n<1000 such that 1/n has the longest period in its
//  decimal expansion.
//  Created by Jimmy Kungsman on 2017-03-20.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <vector>

using namespace std;
// Just checking whether an integer is part of an int-vector.
bool existsInVector(int n, vector <int>* vecPtr){
    for(int i : *vecPtr){
        if(i == n) return true;
    }
    return false;
}

// Returns the length of the period of the reciprocal of a given integer
int getReciprocalPeriod(int n){
    int periodLength = 0;
    int currRemainder = 10 - 10/n;
    vector <int> vec;
    
    while(true){
        currRemainder = 10*currRemainder - ((10*currRemainder)/n)*n;
        
        if(!existsInVector(currRemainder, &vec)){
            vec.push_back(currRemainder);
            periodLength++;
        }
        else return periodLength;
        
    }
        
    return periodLength;
}

// Finding what integer less than 1000 has the longest decimal period.
int main(int argc, const char * argv[]) {
    
    
    int n = 0;
    int maxReciprocalPeriod = 0;
    
    for(int i=2; i<1000; i++){
        if(getReciprocalPeriod(i) > maxReciprocalPeriod){
            n = i;
            maxReciprocalPeriod = getReciprocalPeriod(i);
        }
    }
    
    cout << n << endl;
    
    return 0;
}
