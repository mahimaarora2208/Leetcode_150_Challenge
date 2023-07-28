#include <iostream>
#include<vector>

using namespace std;
bool canJump(vector<int>& nums) {
        int goal_idx = nums.size()-1;
        for(int i = goal_idx;i >= 0 ; i--){
            if(i + nums[i] >= goal_idx){
                goal_idx = i;
            }
        }
        if(goal_idx == 0){
            return true;
        }
        return false;
    }

int main(int argc, char const *argv[])
{
    vector<int> nums{2,3,1,1,4};
    bool result = canJump(nums);
    cout << result;
    return 0;
}
