class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int low =0 , high = k-1 ; 
        int sum =0 , count =0 ; 
        for(int i = 0 ; i< k ; i++){
            sum+= arr[i] ; 
        }
        while(high < arr.size()){
            int avg = sum / k ;
            if(avg >= threshold){
                count ++ ; 
            }
            low ++ ; 
            high ++ ;

            if(high == arr.size()) {
                break ;
            }
            sum = sum - arr[low-1]; 
            sum = sum + arr[high] ; 
        }
        return count ; 
    }
};