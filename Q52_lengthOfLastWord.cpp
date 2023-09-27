#include <iostream>
#include<vector>

using namespace std;

int lengthOfLastWord(string s) {
    int end_idx = s.size() - 1;
    bool flag = false;
    int count = 0;
    for(int i = end_idx; i >= 0; i--){
        if(s[i] >= 'a' && s[i] <='z' || s[i] >= 'A' && s[i] <='Z'){
            flag = true; 
            count++; 
        }
        else{
            if(flag == true){
                return count;
            }
        }
    }
    return count;
}

int main(int argc, char const *argv[])
{
    string input = "a";
    int result = lengthOfLastWord(input);
    return result;
}