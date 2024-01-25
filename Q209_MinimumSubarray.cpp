#include <iostream>
#include<vector>

using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int min_length = 1;
    int l = 0, r = 0;
    int sum = 0;
    while(l <= nums.size() && r <=nums.size()){
        if(sum >= target){
            min_length = min(min_length, r -l + 1);
            sum -=nums[l];
            l++;
        }
        else{
            sum += nums[r];
            r++;
        }
    }
    return min_length;
}


int main(int argc, char const *argv[])
{
    vector<int> nums{2,3,1,2,4,3};
    int target = 7;
    int result = minSubArrayLen(target, nums);
    cout << result;
    return result;
}


