class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
       int best = nums[0] ; 
       int worst = nums[0] ; 
       int ans1 = nums[0] ; 
       int ans2 = nums[0] ; 

       for(int i =1 ; i< nums.size() ; i++){
        best = max( nums[i], nums[i]+best );
        ans1 = max(ans1 , best) ; 

        worst = min(nums[i] , nums[i]+worst)  ; 
        ans2 = min(ans2 , worst) ;  

       }
       return max(ans1 , abs(ans2)) ;     
    }
};