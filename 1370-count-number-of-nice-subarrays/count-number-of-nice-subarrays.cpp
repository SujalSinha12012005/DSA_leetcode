class Solution {
public:
    int atmost(vector<int>& nums, int k){

        int low =0 ; 
        int high = 0 , count_odd =0 ; 
        int res = 0 ; 

        for(high = 0 ; high<nums.size() ; high++){
            if(nums[high] % 2 == 1){
                count_odd ++ ; 
            }
            while(count_odd > k ){
                if(nums[low] % 2 == 1){
                    count_odd -- ; 
                }
                low ++ ; 
            }
             res += high - low+1 ; 

        }
        return res  ; 
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums , k) - atmost(nums , k-1) ; 
    }
};