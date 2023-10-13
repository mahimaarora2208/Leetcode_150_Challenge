#include <iostream>
#include <vector>

using namespace std;
// two pointer method
bool isPalindrome(string s) {
    int p1 = 0;
    int p2 = s.size() - 1;
    while(p1 < p2){
        if(!isalnum(s[p1])){
            p1++;
            continue; 
        }
        if(!isalnum(s[p2]) ){
            p2--;
            continue; 
        }
        if(tolower(s[p1]) != tolower(s[p2])){
            return false;   
        }
        else{
            p1++;
            p2--;
        }
        
                
    }
return true; 
}

// space complexity not good tc - O(N)
bool isPalindrome2(string s) {
    string newstr = "";
    for(int i = 0; i < s.size(); i++){
        if(isalnum(s[i])){
            newstr += tolower(s[i]);
        }    
    }
    string temp = newstr; 
    reverse(newstr.begin(), newstr.end());
    if(newstr == temp ){
        return true; 
    }
    return false;
}   
int main(){
    string input = "A man, a plan, a canal: Panama";
    bool result = isPalindrome(input);
    cout << result;
    

}