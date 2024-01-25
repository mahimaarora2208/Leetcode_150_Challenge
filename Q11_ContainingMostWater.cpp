class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0, r = n - 1;
        int area = 0;
        int max_area = 0;
        while(l < r){
            area = min(height[l], height[r])*(r-l);
            max_area = max(max_area, area);
            if(height[l] < height[r]){
                l++;    
            }
            else{
                r--;
            }
        } 
        return max_area;  
    }
};