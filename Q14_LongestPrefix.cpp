#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    // sorting elements will bring common chars in first and last element
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size()-1];
    int min_size = min(first.size(), last.size());
    for(int i = 0; i < min_size; i++){
        if(first[i] != last[i]){
            return result;
        }
        result += first[i];
    }
    return result;    
}