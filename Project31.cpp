//  Created by Jimmy Kungsman on 2017-04-03.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <vector>
using namespace std;

int numWaysToChange(int amount, vector<int> coinsVec){
    vector<int> numWaysVec(amount + 1); // index represents the amount
    numWaysVec[0] = 1;
    
    for(int coin : coinsVec){
        for(int j=coin; j<=amount+1; j++){
            numWaysVec[j] += numWaysVec[j-coin];
        }
    }
    
    return numWaysVec.at(amount);
}

int main() {
    vector<int> coins = {1,2,5,10,20,50,100,200};
    cout << numWaysToChange(200, coins) << endl;
    return 0;
}
