class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin() , nums.end()); 
        if(nums.size() == 1) return 0 ; 
        int diff = 0 ; 
        for(int i =0 ; i< nums.size() -1 ; i++){
            int ans = abs(nums[i] - nums[i+1] ) ; 
            diff = max(diff , ans);
        }
        return diff ; 
    }
};