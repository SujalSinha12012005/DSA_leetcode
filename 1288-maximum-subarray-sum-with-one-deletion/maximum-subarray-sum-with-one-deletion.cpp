class Solution {
public:
    int  maximumSum(vector<int>& arr) {
       int nodel = arr[0] ; 
       int onedel = 0 ; 
       int ans = arr[0]; 
       for(int i =1 ; i< arr.size() ; i++){
        int prev = nodel ; 
         nodel = max(arr[i] ,  nodel + arr[i]) ; 
         onedel = max(prev ,  onedel + arr[i]) ; 

        ans = max({ans , nodel , onedel}) ;

       }
       return ans ; 
    }
};