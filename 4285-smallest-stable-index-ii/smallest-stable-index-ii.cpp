class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size() ; 
        vector<int>suffix_mini(n) ; 
        vector<int>priffix_maxi(n) ;

        priffix_maxi[0] = nums[0] ; 
        suffix_mini[n -1] = nums[n-1] ; 

        for(int i = n-2 ; i>=0 ; i--){
            suffix_mini[i]= min(suffix_mini[i+1] , nums[i]) ;
        }

        if(priffix_maxi[0] - suffix_mini[0] <= k) {
            return 0;
        }

        for(int i = 1 ; i<n ; i++){
            priffix_maxi[i] = max(priffix_maxi[i-1] , nums[i]) ; 

            if( priffix_maxi[i] - suffix_mini[i] <= k ){ // instability 
                return i ; 
            }
        }
        return -1 ;
        
    }
};