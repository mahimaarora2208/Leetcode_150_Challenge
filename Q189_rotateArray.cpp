#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void rotate(vector<int>& nums, int k) {
        /**
        I/P = [1,2,3,4,5]
        algorithm: 
        1. Reverse entire vector
            [5,4,3,2,1]
        2. Reverse first K elements (if K < nums.size())           
            [4,5,3,2,1]
        3. Reverse K till last elements (if K < nums.size())
            [4,5,1,2,3]
        
        In case K = 7, which is greater than nums.size(), we take K = K % nums.size(). 
        Why?
        if K = 5, no elements move, 5%5 = 0
        if K = 6, elements move y 1 6%5 = 1 
        similarly, if K = 10, 10%5 = 0 --> equivalent to K=0 and K = 5.
    
        **/
        k = k % nums.size();    
        reverse(nums.begin(), nums.end()); // 7 6 || 5 4 3 2 1
        reverse(nums.begin(), nums.begin() + k); // from idx 0 to k -1 i.e 1--> 6 7 || 5 4 3 2 1 
        reverse(nums.begin()+ k ,nums.end()); // from idx k to size - 1 --> 6 7 || 1 2 3 4 5
    }
int main(int argc, char const *argv[])
{
    vector<int> nums{1,2,3,4,5,6,7};
    rotate(nums, 2);
    return 0;
}
