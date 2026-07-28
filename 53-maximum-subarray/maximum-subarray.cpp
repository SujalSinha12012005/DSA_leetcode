class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int best = nums[0] ; 
       int ans = nums[0] ; 
       for(int i =1 ; i< nums.size() ; i++){
        int ans1 = nums[i] ;
        int ans2 = nums[i]+best ;
        best = max(ans1 , ans2 );
        ans = max(ans , best) ;  
       }
       return ans  ;   
    }
};
