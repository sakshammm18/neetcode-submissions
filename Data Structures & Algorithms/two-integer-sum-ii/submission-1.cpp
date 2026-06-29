class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> mp;

        int sub=0;

        for(int i =0;i<numbers.size();i++){
            sub = target-numbers[i];
            if(mp.find(sub)!=mp.end()){
                return {mp[sub]+1,i+1};
            }
            mp[numbers[i]]=i;
        }
        return {};
    }
};
