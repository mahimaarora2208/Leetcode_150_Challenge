class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_avg = 0;
        double sum = 0;
        for(int i = 0; i < k; i++) {
            sum += nums[i];
            max_avg =  1*(sum)/k;
        }
        
        double new_sum = sum;
        double new_avg = max_avg;
        for(int i = k; i < nums.size(); i++){
           new_sum += nums[i] - nums[i-k];
           cout << new_sum << endl;
           new_avg = 1*(new_sum)/k;
          // cout << new_avg << endl;
           max_avg = max(max_avg, new_avg);
          
        }
        
        return max_avg;
    }
};