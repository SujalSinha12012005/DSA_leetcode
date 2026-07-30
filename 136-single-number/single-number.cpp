class Solution {
public:
    int singleNumber(vector<int>& nums) {
       /* map<int , int >f; 
        for(int i = 0 ;i< nums.size() ; i++){
            f[nums[i]]++ ; 
        }
        for(int i = 0 ; i< nums.size() ; i++){
            if(f[nums[i]]==1){
                return nums[i];
            }
        }
        return -1 ;*/
       int ans =0 ; 
       for(int i =0 ; i< nums.size() ; i++){
        ans = ans ^ nums[i] ;
       }
       return ans ; 
    }
};