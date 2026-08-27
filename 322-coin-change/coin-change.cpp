class Solution {
public:
    int helper(vector<int>& coins, int amount , int i  , vector<vector<int>>&dp){

        if(amount == 0) return 0 ; 

        if(i == coins.size()){
            return INT_MAX ; 
        }

        if(dp[i][amount] != -1){
            return dp[i][amount]; 
        }

        int skip = helper(coins , amount , i+1 , dp) ; 

        int take = INT_MAX ; 
        if(coins[i] <= amount){
            int res  =  helper(coins , amount - coins[i] , i , dp) ; 
            if(res != INT_MAX){
                take = 1+ res ; 
            }
        }

        return dp[i][amount] = min(take , skip) ; 


    }
    
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size() ; 
       vector<vector<int>>dp(n+1 , vector<int>(amount +1 , -1 )) ;
       int ans =  helper(coins , amount , 0 , dp) ; 
        return ans == INT_MAX ? -1 : ans;
    }
};