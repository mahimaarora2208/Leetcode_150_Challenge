#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

// O(N) time complexity SC - O(N)
int MajorityElementMap(vector<int>& nums) {
         
}

// O(NlogN) time complexity SC -O(1)
int majorityElement(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}

// O(N^2) time complexity
int MajorityElement(vector<int>& nums) {
    int max_count = 0;
    int idx_max_count = -1;
    for(int i = 0; i < nums.size(); i++){
        int count = 0;
       for(int j = 0; j < nums.size(); j++){
            if (nums[i] == nums[j])
            {
                count++;
            }
            if (count > max_count){
                max_count = count;
                idx_max_count = i;
            }     
        }
        if (max_count > nums.size()/2){
            cout << nums[idx_max_count] << endl;
            return nums[idx_max_count];
        } 
        else{
            cout << " No Majority Element" << endl;
        } 
    }
}

int main(int argc, char const *argv[])
{
    vector<int> nums{2,2,3,1,2,2,3,2};
    MajorityElement(nums);
    return 0;
}
