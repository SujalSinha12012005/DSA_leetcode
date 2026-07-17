class Solution {
public:
   /* bool check (vector<int>& nums , int i , int s1, vector<vector<int>>&dp){
        if(i==nums.size()){
            if(s1 ==0){
                return true ;
            }
            else {
                return false ; 
            }
        }
        if(dp[i][s1] !=-1){
            return dp[i][s1] ; 
        }
        if(nums[i] > s1){
            return dp[i][s1] = check(nums , i+1 , s1 , dp); 
        }

        bool take = check(nums , i+1 , s1 - nums[i] , dp); 
        bool not_take = check(nums , i+1 , s1 , dp); 

        return dp[i][s1] = take or not_take ; 

    }*/ 
    bool canPartition(vector<int>& nums) {
        int sum =0 ,n = nums.size() ;
        for(int i =0 ; i< n ; i++){
            sum += nums[i];
        }
        if(sum %2==1){ //if sum odd,half will be decimal & arr has all int so cant find 
            return false ; 
        }
        int s1 = sum /2 ;  
        vector <vector<int>>dp(n+1); 
        for(int i = 0 ; i<=n; i++){
        vector<int>t (s1+1 , -1 ); 
        dp[i]= t ; 
        }
        for(int j = 0 ; j <= s1 ; j++){
            dp[n][j] = 0 ;
            dp[n][0] = 1 ; 
        }

        for(int i = n-1 ; i >= 0 ; i--){
            for(int j = 0 ; j<= s1 ; j++){
                if(nums[i] > j){
                    dp[i][j]= dp[i+1][j];
                }
                else {
                    dp[i][j]= (  dp[i+1][j] or   dp[i+1][j-nums[i]]  );
                }
            }
        }
        return dp[0][s1]; 

        //return check (nums , 0 , s1 , dp); 
    }
};