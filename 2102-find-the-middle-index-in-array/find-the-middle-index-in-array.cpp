class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
     int sum =0 ; 
     for(int i =0 ; i<nums.size() ; i++){
        sum += nums[i];
     }
     int leftsum =0 , rightsum=0 ; 
    for(int i  =0 ; i<nums.size() ; i++){
        if(i>0){
            leftsum += nums[i-1]; 
        }
        rightsum = sum- leftsum - nums[i]; 
        if(leftsum == rightsum ){
            return i ; 
        }

    }
    return -1 ; 

        
    }
};