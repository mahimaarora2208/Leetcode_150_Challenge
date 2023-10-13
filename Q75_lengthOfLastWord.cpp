// Method 1 - isalpha()
int lengthOfLastWord(string s) {
        // hello world -> 11 i = 10 a-z A-Z
        int count = 0; 
        bool flag = false;
        for(int i = s.size() - 1; i >= 0; i--){
            if(isalpha(s[i])){
                count++;
                flag = true;
            }
            else{
                if(flag == true){
                    return count;
                }
            }
        }
    return count;   
    }

// Method 2
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