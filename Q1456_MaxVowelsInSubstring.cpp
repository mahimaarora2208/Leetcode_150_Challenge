class Solution {
public:
    bool is_vowel(char c){
        if(c == 'e' ||c == 'a' ||c == 'i' ||c == 'o' ||c == 'u'){
            return true;
        }
        else{
            return false;
        }
    }
    int maxVowels(string s, int k) {
        int num_vowels = 0;
        for(int i = 0; i < k; i++){
            if(is_vowel(s[i])){
                num_vowels++;
            }
        }

        int max_vowels = num_vowels;
        char incoming;
        char outgoing;
         for(int i = k; i < s.size(); i++){
            incoming = s[i];
            outgoing = s[i-k];
       
            if(is_vowel(incoming)){
                num_vowels++;
            }
            if(is_vowel(outgoing)){
                num_vowels--;
            }
           
            max_vowels = max(max_vowels, num_vowels);                
        }
       
        return max_vowels;
    }
};