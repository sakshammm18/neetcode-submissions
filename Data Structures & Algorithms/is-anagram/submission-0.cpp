class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqTable[256]={0};
        int n = s.size();
        for(int i =0;i<n;i++){
            freqTable[s[i]]++;
        }
        for(int i =0;i<t.length();i++){
            freqTable[t[i]]--;
        }
        for(int i =0;i<256;i++){
            if(freqTable[i]!=0){
                return false;
            }
        }
        return true;
    }
};
