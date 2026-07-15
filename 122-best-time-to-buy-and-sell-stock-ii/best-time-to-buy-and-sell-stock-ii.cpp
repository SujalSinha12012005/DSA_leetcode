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

        if(k==2){ // for buy 
            int ans1 = fun( prices , n , i+1 , k-1,dp) - prices[i] ;
            int ans2= fun( prices , n , i+1 , k,dp);
            return dp[i][k]=max(ans1 , ans2); 
        }
        else { //for sell , here buy and sell must be ulimited so make k =2 
            int c1 = fun(prices , n , i+1 , 2,dp) + prices[i];
            int c2 = fun( prices , n , i+1 , k, dp);
            return dp[i][k]= max(c1,c2); 
        }
    }

    int maxProfit(vector<int>& prices) {
       int n =  prices.size() ;
       int i=0 ; 
       int k=2 ; //max two trasation that is buy and sell 
       vector<vector<int>>dp(n+1 , vector<int>(k+1, -1)); 
       return fun( prices , n , i , k,dp);
    }
};

/* int profit = 0 ; 
        for(int i =0 ; i< prices.size() -1 ; i++){
            if(prices[i+1]>prices[i]){
                profit += prices[i+1]-prices[i];
            }
        }
        return profit ; */