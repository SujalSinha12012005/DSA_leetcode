class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        int mx = nums[0] ; 
        int mini = nums[0] ; 
        int miniIdx =0 , mxIdx =0 ; 

        for(int  i =0 ; i< nums.size() ; i++){
            mx = max(mx , nums[i]) ; 
            mini = min(mini , nums[i]) ; 
        }

        for(int i =0 ; i< nums.size() ; i++ ){
            if(mx == nums[i]){
                mxIdx =  i ; 
            }
        }

        for(int i =0 ; i< nums.size() ; i++){
            if(mini == nums[i]){
                miniIdx = i ;
             }
        }

        int n = nums.size() ; 

        int first = min(mxIdx , miniIdx) ; 
        int last = max(mxIdx , miniIdx) ;

        int left = last + 1 ; 
        int right = n - first ; 
        int both = first+1 + (n - last) ; 

        return min({left , right , both }) ;   
       

    }
};