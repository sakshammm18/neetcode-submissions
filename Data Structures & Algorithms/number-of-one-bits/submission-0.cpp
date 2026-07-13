class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans =0;
        if(n==0) return 0;
        if(n%2==0){
            ans = hammingWeight(n/2);
        }
        else {
            ans =hammingWeight(n/2)+1;
        }
        return ans ;
    }
};
