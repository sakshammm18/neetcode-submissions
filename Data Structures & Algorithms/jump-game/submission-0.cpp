class Solution {
public:
    bool solve(vector<int>& nums, int n , int idx){
        if(idx==n-1) return true;

        for(int i =1;i<=nums[idx];i++){
            if(solve(nums,n,idx+i)){
                return true;
            }
        }
        return false;
    }
    bool canJump(vector<int>& nums) {
        // saara khela for loop ka h bss
        int n = nums.size();
        return solve(nums,n,0);
    }
};
