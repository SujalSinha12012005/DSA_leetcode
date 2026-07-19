class Solution {
public:
    int mod = 1e9 +7 ; 
    int solve(int n, int k, int target , vector <vector<int>>&dp){

        if(n==0){
            if(target==0){//base case when num of dice&target is 0 found a combination so 1 way
                return 1 ; 
            }
            return 0 ; //when not a comb so 0 
        }
        if(target < 0){
            return 0 ; //when target -1 not achiveable so 0 ways tp get it 
        }
        if(dp[n][target]!= -1){
            return dp[n][target]; 
        }
        int ways =0 ; //initilay no comb known 

        for(int i = 1 ; i<= k ; i++){ //to explore all the faces combiantion 
        ways= (ways + solve (n-1 , k , target - i ,dp)) % mod ;//dice reduce and target closer so redcue 
        }
        return dp[n][target]=ways ; 

    }
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>dp(n+1, vector<int>(target+1 , -1)); 
        return solve (n , k , target, dp ); 
    }
};