class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum =nums[0] ; 
        int ans1 = nums[0]  , ans2 = nums[0];
        int best = nums[0] , worst = nums[0] ; 
        for(int i =1 ; i< nums.size() ; i++){
            sum += nums[i]; 
            best = max(nums[i] , nums[i] + best); 
            ans1 = max(ans1 , best); 
            worst = min(nums[i] , nums[i] + worst); 
            ans2 = min(ans2 , worst) ;
        } 
        if(ans1 < 0){
            return ans1 ; 
        }
        int left = sum - ans2 ; 
        return max(left , ans1); 

    } 

};