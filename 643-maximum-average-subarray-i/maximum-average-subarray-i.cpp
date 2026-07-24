class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum =0 , avg =0 ; 
        int low =0 , high = k-1 ;
        double res = INT_MIN ; //fixed window 
        for(int i=0 ; i<k ; i++){
            sum+=nums[i] ;
        }
        while(high < nums.size()){
            avg = sum/k ; 
            res = max(avg , res); 
            low++ ; 
            high++ ; 

            if(high == nums.size()){
                break ; 
            }

            sum = sum - nums[low-1]; 
            sum = sum + nums[high] ;
        }
        return res  ; 
    }
};