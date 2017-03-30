//  Created by Jimmy Kungsman on 2017-03-29.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>

using namespace std;

// Given an integer fills a map with all primes from its
// prime factorization (as keys) and corresponding multiplicites
// as values.
void getPrimesWithMultiplicity(int n, map<int,int>* m){
    for(int i=2; i<=n; i++){
        if(n%i == 0){
            (*m)[i]++;
            n /= i;
            if(n == 1){return;}
            else{break;}
        }
    }
    getPrimesWithMultiplicity(n, m);
}

// Generate all pairs (a,b) of integers up to given limit.
vector<vector<int>> getPairs(int aMax, int bMax){
    
    vector<vector<int>> allPairs;
    
    for(int i=2; i<=aMax; i++){
        for(int j=2; j<=bMax; j++){
            vector<int> singlePair = {i,j};
            allPairs.push_back(singlePair);
        }
    }
    return allPairs;
}

// Returns the greatest common factor of two integers
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Reduces an integer pair (a,b) to its lowest form in the sense that
// if a = c^d with d maximal then (a,b) is replaced by (c, b*d).
void reduceAPair(vector<int>* pair){
    int a = (*pair)[0];
    int b = (*pair)[1];
    int gcf = 0;
    map<int, int> m;
    
    getPrimesWithMultiplicity(a, &m);
    
    a = 1; // reset a before modification
    
    map<int, int>::iterator it;
    
    for (it = m.begin(); it != m.end(); it++){
        gcf = gcd(gcd(it->second, gcf), gcf);
    }
    
    for (auto& prime : m){
        prime.second /= gcf;
        a *= pow(prime.first, prime.second);
    }
    
    b *= gcf;
    
    (*pair) = {a,b};
    
}

// Two pairs of the form (a,b) are considered the same if they share
// the same reduced form. The answer to Euler project #29 is the number
// of distinct reduced pairs.
int main() {
    vector<vector<int>> allPairs = getPairs(100, 100);
    set<vector<int>> reducedSet;
    
    for(auto pair : allPairs){
        
        reduceAPair(&pair);
        reducedSet.insert(pair);
    }
    cout << reducedSet.size() << endl;
}
