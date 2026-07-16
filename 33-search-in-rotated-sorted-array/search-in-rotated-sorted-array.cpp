class Solution {
public:
    int search(vector<int>& nums, int target) {
      int low =0 , high = nums.size() -1 ; 
      int n = nums.size()  ; 
      while(low <= high){
        int mid = low + (high - low)/2;
        if(nums[mid] == target){
            return mid ; 
        }
        else if(nums[mid] > nums[n-1]){ //part 1 
            if(nums[mid] < target){
                low = mid +1 ;
            }
            else if (nums[0] > target){
                low = mid + 1 ;
            }
            else {
                high = mid -1 ; 
            }
        }
        else { //when nums[mid] < nums[n-1] part 2 
            if(nums[mid] > target){
                high = mid -1 ; 
            }
            else if(nums[n-1] < target){
                high = mid -1 ; 
            }
            else {
                low = mid+1 ;
            }
        }
      }
      return -1 ; 
    }
};