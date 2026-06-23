class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;

        for(int i =0;i<nums.size();i++){
         int numn = target - nums[i];
         if(mp.find(numn)!=mp.end()){
            return{mp[numn],i};
         }
         mp[nums[i]]=i;

        }
        return {};
    }
};
