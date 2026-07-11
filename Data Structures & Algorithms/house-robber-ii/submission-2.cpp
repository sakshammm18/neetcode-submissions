class Solution {
public:
    int solve(vector<int>& nums , int i , int x,vector<vector<int>>& dp){
    

      if(i>x) return 0;
      if(dp[i][x]!=-1) return dp[i][x];
        int take =nums[i] +solve(nums,i+2,x,dp);
        int skip=solve(nums,i+1,x,dp);

        
      return  dp[i][x]=max(take,skip);
    }

    int rob(vector<int>& nums) {
        int i =0;
        int n =nums.size();
        if(n == 1) return nums[0];
        vector<vector<int>> dp(n,vector<int>(n,-1));

        int case1,case2;
         case1=solve(nums,i,n-2,dp);
         case2=solve(nums,i+1,n-1,dp);

         return max(case1,case2);
     
    }
};
