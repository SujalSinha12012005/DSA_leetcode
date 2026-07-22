class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int low =0 , high =0 ; //since varibale window 
      int sum =0 , res = INT_MAX ; 
      for(int high = 0 ; high < nums.size() ; high++){
        sum = sum  + nums[high]; //add untill it is more or equal to tagrget at first hire 
        while (sum>=target){
            int len = high -low +1 ; 
            res= min(res , len); 
            sum= sum - nums[low]; 
            low ++ ; 
        }
      }
      return res == INT_MAX ? 0 : res  ; 
    }
};