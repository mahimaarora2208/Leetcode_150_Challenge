#include <iostream>
#include<vector>

using namespace std;

int trap(vector<int> height) {
    int n = height.size();
    int trapped = 0; 
    int temp;  
    vector<int> maxLeft(n,0);
    vector<int> maxRight(n,0);
    // Max Left array
    maxLeft[0] = 0;
    for(int i = 1; i < n; i++){
        maxLeft[i] = max(maxLeft[i-1], height[i-1]);
    }
    // Max Right array
    maxRight[n-1] = 0;
    for(int i = n-2; i >= 0; i--){
        maxRight[i] = max(maxRight[i+1], height[i+1]);
    }
    // Calc trapped water
        for(int i = 0 ; i < n; i++){
            temp = min(maxLeft[i], maxRight[i]) - height[i];
            if (temp > 0)
            {
                trapped += temp;
            }
            
              
        }
    return trapped;
}

int main(int argc, char const *argv[])
{
    vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
    int result = trap(height);
    return result;
}
