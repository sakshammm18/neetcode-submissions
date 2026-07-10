class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> leftarray(nums.size());

       leftarray[0]=1;
       for(int i =1;i<nums.size();i++){
          leftarray[i] = leftarray[i-1]*nums[i-1];

       }

       int rightProd=1;


    //   vector<int> rightarray;
       for(int i=nums.size()-1;i>=0;i--){
          leftarray[i]=leftarray[i]*rightProd;
          rightProd=nums[i]*rightProd;
       }
       return leftarray;
    }
};
