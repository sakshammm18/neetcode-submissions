class Solution {
public:

    bool solve(string& s, unordered_set<string>& st, int i, vector<int>& dp){

        if(i == s.size())
            return true;

        if(dp[i] != -1)
            return dp[i];

        for(int j = i; j < s.size(); j++){

            string word = s.substr(i, j - i + 1);

            if(st.count(word)){

                if(solve(s, st, j + 1, dp))
                    return dp[i] = true;
            }
        }

        return dp[i] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        unordered_set<string> st(wordDict.begin(), wordDict.end());

        vector<int> dp(s.size(), -1);

        return solve(s, st, 0, dp);
    }
};