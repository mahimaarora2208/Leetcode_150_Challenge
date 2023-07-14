#include <iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() < 3){
        return nums.size();
    }
    int k = 2;
    for(int i = 2; i < nums.size(); i++){
        if(nums[i] != nums[k-2]){
            nums[k] = nums[i];  
            k++;  
        }
    }
    cout << k;
    return k;        
}

int main(int argc, char const *argv[])
{
    vector<int> nums{0,1,1,1,2,3,3};
    removeDuplicates(nums);
    return 0;
}
