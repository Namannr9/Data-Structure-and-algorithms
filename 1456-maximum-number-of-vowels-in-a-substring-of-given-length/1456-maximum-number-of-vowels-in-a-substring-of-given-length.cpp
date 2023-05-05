class Solution {
public:
    bool isVowle(char c) {
        return (c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u'); 
    }
    
    int maxVowels(string s, int k) {
        int i = 0, j = 0;
        int count = 0;
        int ans = 0;
        while(i<k){
            if(isVowle(s[i])) count++;
            i++;
        }
        while(i<s.size()) {
            ans = max(ans,count);
            if(isVowle(s[i])) count++;
            if(isVowle(s[j])) count--;
            i++; j++;
        }
         ans = max(ans,count);
        return ans;
    }
};