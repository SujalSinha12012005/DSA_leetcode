class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mx =INT_MIN , mi =INT_MAX ; 
        for(int i =0 ; i< nums.size() ; i++){
            mx = max(mx , nums[i]); 
            mi = min(mi , nums[i]); 
        }
        vector<int>res ; 
        set<int>f(nums.begin() , nums.end()) ;
        for(int i = mi ; i< mx ; i++){
            if(f.find(i) == f.end()){
                res.push_back(i) ; 
            }
        }
        return res ; 
    }
};