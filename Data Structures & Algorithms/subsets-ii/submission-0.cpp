class Solution {
public:
vector<vector<int>> ans;
    void solve(vector<int>& nums,int i , vector<int>& temp ){
      //  vector<vector<int>> ans;
        //base case
         ans.push_back(temp);
        
        for(int j = i; j < nums.size(); j++){
            if(j > i && nums[j] == nums[j-1]) continue;
           // if(nums[j] > target) break;
        temp.push_back(nums[j]);
        solve(nums,j+1,temp);
       
         temp.pop_back();
         // solve(nums,j+1,temp);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      vector<int> temp;
      sort(nums.begin(),nums.end());
        solve(nums,0,temp);
        return ans;
    }
};
