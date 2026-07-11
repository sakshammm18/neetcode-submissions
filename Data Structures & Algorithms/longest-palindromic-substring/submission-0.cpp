class Solution {
public:

    bool ispalindrome(string s, int start ,int end){
        //if(s.size()==0) return true;
        while(start<=end){
        if(s[start]!=s[end]){
            return false;
        }
        start++;
        end--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n =s.size();
        string ans;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispalindrome(s,i,j)){
                    string t=s.substr(i,j-i+1);
                    ans = t.size()>ans.size()?t:ans;
                }
            }
        }
        return ans;
    }
};
