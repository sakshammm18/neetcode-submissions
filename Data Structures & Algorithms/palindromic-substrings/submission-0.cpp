class Solution {
public:
 bool isPalindrome(int i , int j ,string& s ){
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
    int countSubstrings(string s) {
         string ans="";
         int count =0;
        for(int i =0;i<s.size();i++){
            for(int j =i;j<s.size();j++){
                if(isPalindrome(i,j,s)){
                    count++;
                }
            }
        }
      
        return count;
    }
    
};