class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
           int n =nums.size();
           unordered_map<int,int> mp;
           for(auto& it:nums){
            mp[it]++;
           }

           vector<vector<int>> bucket(n+1);
           for(auto &it:mp){
             int element = it.first;
             int freq=it.second;
             bucket[freq].push_back(element);
           }
           vector<int> result;
           for (int i = n; i > 0 && k > 0; i--) {
    for (int num : bucket[i]) {
        result.push_back(num);
        if (--k == 0)
            break;
    }
           }
           return result;
    
}
    
};
