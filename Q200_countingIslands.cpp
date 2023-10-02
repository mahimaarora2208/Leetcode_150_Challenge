#include <iostream>
#include <vector>

using namespace std;
    void checkAdj(int r, int c, vector<vector<char>>& grid) {
        // exit stratergy 
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size()){
            return;
        }
        if(grid[r][c] == '0'){
            return;
        }

        grid[r][c] = '0';
        // recurssion
        checkAdj(r+1,c, grid); 
        checkAdj(r-1,c,grid);
        checkAdj(r,c+1,grid);
        checkAdj(r,c-1,grid);
    }
int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int r = 0; r < grid.size(); r++){
            for(int c = 0; c < grid[0].size(); c++){
                if(grid[r][c] == '1'){
                    count++;
                    checkAdj(r,c,grid);
                }
            }   
        }
        return count;
    }


int main(){
    vector<vector<char>> input{{ '1','1','1','1','0' }, 
                                {'1','1','0','1','0' }, 
                                {'1','1','0','0','0' },
                                {'0','0','0','0','0' }}; 
    int result = numIslands(input);
    cout << result;
    

}