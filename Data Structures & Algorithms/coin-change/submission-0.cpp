class Solution {
public:

    int recans(vector<int>& coins, int amount, int i){

        if(amount == 0)
            return 0;

        if(i == coins.size())
            return INT_MAX;

        int include = INT_MAX;

        if(amount >= coins[i]){
            int temp = recans(coins, amount - coins[i], i);

            if(temp != INT_MAX)
                include = 1 + temp;
        }

        int exclude = recans(coins, amount, i + 1);

        return min(include, exclude);
    }

    int coinChange(vector<int>& coins, int amount) {

        int ans = recans(coins, amount, 0);

        return ans == INT_MAX ? -1 : ans;
    }
};