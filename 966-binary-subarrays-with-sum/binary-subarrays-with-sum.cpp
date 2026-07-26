class Solution {
public:
    int atmost (vector<int>& nums, int goal){
    if (goal < 0) return 0;
        int low =0 , high =0 ; 
        int res = 0 ; 
        int sum = 0  ;  
        for(high =0 ; high < nums.size()  ; high++){
            sum =  sum + nums[high];
            while(sum >goal){
                sum = sum - nums[low] ;
                low ++  ; 
            }
            res+= high - low +1 ; 
        }
        return res ; 
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums , goal) - atmost(nums , goal-1 ) ; 
    }
};