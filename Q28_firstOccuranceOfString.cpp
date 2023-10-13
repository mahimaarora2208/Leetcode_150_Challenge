#include <iostream>
#include <vector>

using namespace std;
// if haystack[i+j] == needle[j] => longer method, requires match variable and extra checks. O(N*M)
int strStr(string needle, string haystack){
    int match = 0;
    if(needle.size() > haystack.size()){
        return -1;
    }
    for (int i = 0; i <= haystack.size() - needle.size() ; i++)
    {
        for (int j = 0; j < needle.size(); j++)
        {
        if(haystack[i+j] == needle[j]){
            match++;
        }
        else{
            match = 0; 
            break;
        }
        if(match == needle.size()){
            return i;
        }  
        }   
    }
return -1;
}

// // if haystack[i+j] != needle[j] => ideal for time complexity, requires extra checks. O(N*M)
 int strStr3(string haystack, string needle) {
        if(haystack.size() < needle.size()){
            return -1;
        }
        for (int i = 0; i <= haystack.size() - needle.size() ; i++)
        {
            for (int j = 0; j < needle.size(); j++)
            {
                if(haystack[i+j] != needle[j]){
                    break;
                }
                if(j == needle.size()-1){
                    return i;
                }   
            }
        }
    return -1;
    }

// TWO POINTER (O(M)) --> ideal for space complexity
int strStr2(string needle, string haystack){
    int i = 0, j = 0;
    while(i < haystack.size() && j < needle.size()){
    if(haystack[i] == needle[j]){
        i++;
        j++; 
        if(j == needle.size()){
            return i - needle.size();
        }    
    }
    else{
            i = i - j + 1;
            j = 0;
        } 
    }
    return -1;
}

int main(){
    string needle = "leet"; // 3
    string haystack = "baleetcode"; // 9
    int result = strStr2(needle, haystack);
    cout << result;
    

}