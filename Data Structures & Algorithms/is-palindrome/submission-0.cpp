class Solution {
public:
    string helper(string s){
        string clean ="";

        for(auto it : s){
            if(isalnum(it)){
                clean += tolower(it);
            }
        }
        cout << clean;
        return clean;
    }
    bool isPalindrome(string s) {
             string a= helper(s);

             int i =0;
             int j = a.length()-1;
             while(i<=j){
                if(a[i]!=a[j]) return false;
             
             i++;
             j--;
             }
             return true;
    }

};
