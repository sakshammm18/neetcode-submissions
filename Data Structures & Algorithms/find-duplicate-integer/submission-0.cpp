class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
         int count =0;

        for(auto it:nums){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second>1) return it.first;
        }
        return 0;
    }
};
