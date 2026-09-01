class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
       map<int , int>f ; 
        int n = nums.size() ; 
       for(int i =0 ; i<nums.size(); i++){
            f[nums[i]]++ ; 
       }
        int duplicate = -1 , missing = -1 ;
       for(int i  = 1 ;  i<= n ;  i++ ){
        if(f[i] == 2 ){ //duplicate val 
             duplicate = i  ; 
        }

        else if(f[i]== 0 ){
             missing = i ; 
        }
       }

       return {duplicate , missing} ; 
    }
};