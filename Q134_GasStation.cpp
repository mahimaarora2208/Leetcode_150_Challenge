class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int sum = 0;
        int start = 0;
        for(int i = 0; i < gas.size(); i++){
            sum += gas[i] - cost[i]; // total sum of diff should be greater than 0
            total += gas[i] - cost[i];  // we want to know if the start is i
            if(total < 0){
                total = 0;
                start =  i + 1;
            }
        }
        if(sum < 0){
            return -1;
        }
        return start;
    }
};