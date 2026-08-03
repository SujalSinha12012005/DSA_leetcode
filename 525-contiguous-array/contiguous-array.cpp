class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int ones =0 ; 
    int zeros =0 ; 
    int res =0 ; 
    map<int , int>f ; 
    for(int i =0 ; i< nums.size() ; i++){
        if(nums[i]==0){
            zeros ++ ; 
        }
        if(nums[i] == 1){
            ones ++ ; 
        }
        int diff = ones - zeros ; 
        if(diff ==0 ){
            res = max(res , i+1) ; 
        }
        if(f.find(diff) == f.end()){
            f[diff] = i ; 
        }
        else {
            int len = i - f[diff] ; 
            res = max(res , len);
        }
    
    }
    return res ; 
    }
};