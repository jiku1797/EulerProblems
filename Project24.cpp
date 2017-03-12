/* We are asked to find the 10^6:th lexicographical permutation
*  of the integers 0-9. The solution is based on the fact that
*  there are i! (factorial) permutations on i letters.
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// calculate factorials
unsigned long factorial(int n){
    if(n==0) return 1;
    
    else return n*factorial(n-1);
}

int main() {
    vector <int> nums = {0,1,2,3,4,5,6,7,8,9};
    string finalPerm = "";
    
    int remain = 1000000 - 1;
    
    for(int i=1; i<10; i++){
        int numOfIntervals = remain / factorial(10 - i); 
        
        remain %= factorial(10-i);
        
        finalPerm += to_string(nums[numOfIntervals]);
        
        nums.erase(nums.begin() + numOfIntervals);
        
        if(remain == 0) break;
    }
    
    
// concatenating remaining integers from the nums vector
    for(int i=0;i<nums.size();i++){
        finalPerm += to_string(nums[i]);
    }
    
    cout << "The millionth lexicographical permutation is: " << finalPerm << endl;
    
    exit(0);
}
