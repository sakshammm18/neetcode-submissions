class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> left(nums.size());
       left[0]=1;
       for(int i =1;i<nums.size();i++){
           left[i]=left[i-1]*nums[i-1];
       }
   // vector<int> rightProd;
    int rightProd=1;
        for(int r=nums.size()-1;r>=0;r--){
            left[r]=left[r]*rightProd;
            rightProd*=nums[r];
        }
        return left;
    }
};
