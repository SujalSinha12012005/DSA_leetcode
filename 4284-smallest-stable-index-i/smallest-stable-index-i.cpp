class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> mini(nums.size());
        int mi = INT_MAX ; 
        int mx = 0 ;
        vector<int>maxi ; 
        for(int i =nums.size() -1  ; i>=0 ; i--){
            mi = min(nums[i] , mi) ; 
            mini[i] = mi ;
        }
        for(int i =0 ; i<nums.size() ; i++){
            mx = max(mx , nums[i]) ; 
            maxi.push_back(mx) ; 

            if(maxi[i] - mini[i] <= k){
                return i ;
            }
        }
        return -1 ;
    }
};