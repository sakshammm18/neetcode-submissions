class Solution {
public:
         string helper(string s){
            string clean="";
            for(char c: s){
                if(isalnum(c)){
                    clean+=tolower(c);
                }
            }
            return clean;
         }
    
    bool isPalindrome(string s) {
        string p = helper(s);
        int i=0;
        int j = p.size()-1;
        while(i<=j){
            if(p[i]!=p[j]) return false;
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
