class Solution {
public:
 vector<vector<int>> ans;
    void solveByRecursion(vector<int>& nums,int i , vector<int>& temp ){
      //  vector<vector<int>> ans;
        //base case
        if(i>=nums.size()){
            ans.push_back(temp);
            return;
        }
        
        
        temp.push_back(nums[i]);
        solveByRecursion(nums,i+1,temp);
       
         temp.pop_back();
          solveByRecursion(nums,i+1,temp);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        int i =0;
        solveByRecursion(nums,i,temp);
        return ans;
    }
    
};