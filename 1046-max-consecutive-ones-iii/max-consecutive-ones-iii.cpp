class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int low =0 , high =0 ; 
     int res =0 ; 
     map<int , int>f ; 
     for(high =0 ; high<nums.size() ; high++){
        f[nums[high]]++ ; // exapnd ;  
        while (f[0] > k){ // when no of 0's more than num of replace
            f[nums[low]] -- ;
            if(f[nums[low]] == 0){
                f.erase(nums[low]) ; 
            }
            low++ ; 
        }
        int len  = high - low +1 ; 
        res = max(res , len);
     }
     return res ; 
    }
};