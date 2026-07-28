class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int best = nums[0] , worst = nums[0] , ans = nums[0] ; 
    for(int i =1 ; i< nums.size() ; i++){
        int v1 = nums[i] ; 
        int v2 = nums[i] * best ; 
        int v3 = nums[i] * worst ; 
        best = max({v1 , v2 , v3}); 
        worst = min({v1 , v2 , v3}) ; 
        ans = max({best , worst , ans}) ;
    }
    return ans ; 
    }
};