class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        int pre = 1;
        for(int i = 0; i < n;i++){
            output[i] = pre;
            pre *= nums[i];
        }
        int post = 1;
        for(int i = n-1; i >= 0;i--){
            output[i] *= post;
            post *= nums[i];
        }
        return output;
    }
};