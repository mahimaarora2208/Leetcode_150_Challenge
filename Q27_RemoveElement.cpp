class Solution {
public:
 // [1,2,3,4,5,2] val = 2
 // [1,3,4,5,_,_]
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] != val){
                nums[k] = nums[i]; 
                k++;
            }
        }
    return k;
    }
};