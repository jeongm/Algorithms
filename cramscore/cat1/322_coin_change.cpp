/*
Premise
given an integer array of coins representing different denominations 
and and integer amount representing a total amount of money
return the fewest number of coins I need to make up that amount
if impossible, return -1. 
*/

/*
Attempt 1 
classic DP problem, but I am really rusty with DP. haha 
stuff to remember: 
- type matters, it is annoying though
- try to write it out on paper until I can do it without drawing 
- only update the value if I can reduce the number of coins by subtracting whatever accumulation I had so far and add 1 
- still spotty, do some more practice 
*/

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {     
        long INT_MAX_LONG = (1l << 31)  - 1; 
        size_t i, j; 
        vector<long> dp(amount+1, INT_MAX_LONG); 
        
        dp[0] = 0; 
        for(i = 0;  i < coins.size(); ++i){
            for(j = coins[i]; j <= amount; ++j){
                dp[j] = min(dp[j], dp[j-coins[i]] + 1); 
            }
        }
        
        if(dp[amount] == INT_MAX_LONG){
            return -1;
        }
        return dp[amount];
        
    }
};

