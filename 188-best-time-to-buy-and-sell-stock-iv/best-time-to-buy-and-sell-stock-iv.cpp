class Solution {
public:
    int fun(vector<int>& prices , int  n , int i , int k , vector<vector<int>>&dp){
       if(i==n){
            return 0 ; 
        }
        if(dp[i][k]!=-1){
            return dp[i][k];
        }
        if(k==0){ //both trns done so 0 transaction left 
            return 0 ; 
        }

        if(k%2==0){ // for buy even that when k=4,2 
            int ans1 = fun( prices , n , i+1 , k-1,dp) - prices[i] ;
            int ans2= fun( prices , n , i+1 , k,dp);
            return dp[i][k]=max(ans1 , ans2); 
        }
        else { //for sell odd transaction 
            int c1 = fun(prices , n , i+1 , k-1,dp) + prices[i];
            int c2 = fun( prices , n , i+1 , k, dp);
            return dp[i][k]= max(c1,c2); 
        }
    }
    int maxProfit(int k, vector<int>& prices) {
         int n =  prices.size() ;
       int i=0 ; 
       k=k*2; //max two set trasation that is buy and sell so 4 
       vector<vector<int>>dp(n+1 , vector<int>(k+1, -1)); 
       return fun( prices , n , i , k,dp);
    }
};