class Solution {
public:
    int ans(vector<int>& nums,int i,vector<int>& dp ){
        int result=0;
        if(i>=nums.size()) return result;
        if(dp[i]!=-1) return dp[i];
           int take=0;
           take=nums[i]+ans(nums,i+2,dp);
           int skip=0;
           skip=0+ans(nums,i+1,dp);
        result = max(take,skip);
        dp[i]=result;

        return dp[i];
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
       return ans(nums,0,dp); 
    }
};
