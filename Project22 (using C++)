/*  In this problem we are given a separate text file names.txt of the form
    "JIMMY","KUNGSMAN" etc. First we should rearrange the names into alphabetical
    order. Then, with A having a value of 1, B a value of 2 and so on we should 
    multiply the value of each name with its position in the ordered list of
    names, and then add these values for every name in the list.
*/

//  Created by Jimmy Kungsman on 2017-02-20.
//  Copyright © 2017 Jimmy Kungsman. All rights reserved.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// converting comma-separated text document of names into string vector
vector<string> fileToVec(){
    vector <string> nameVec;
    string token;
    string s;
    
    ifstream reader;
    reader.open("/Users/jimmykungsman/Desktop/Euler22/names.txt");
    
    if(!reader.is_open()){
        cout << "Could not open file!" << endl;
    }
    
    while(getline(reader,token,',')){
        nameVec.push_back(token);
    }
    
    return nameVec;
}

// returns alphabetically sorted string vector
vector <string> sortVec(vector <string> inVec){
    sort(inVec.begin(), inVec.end());
    return inVec;
}

// Calculates value of an individual string
int stringValue(string s){
    int stringValue = 0;
    
    //remove quotes from first and last character
    s = s.substr(1,s.size()-2);
    
    for(char &c : s){
        stringValue += c - 64; //capital ASCII letters start at 65
    }
    
    return stringValue;
}

int main() {
    
    vector <string> nameList = fileToVec();
    nameList = sortVec(nameList);
    
    int totalValue = 0;
    int counter = 1;
    
    // Calculate total value accoding to problem
    for(auto name : nameList){
        totalValue += stringValue(name)*counter;
        counter++;
    }
    
    cout << "Total value is " << totalValue << endl;
}
