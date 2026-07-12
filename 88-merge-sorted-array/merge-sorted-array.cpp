class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int low =0 , high = 0 ; 
    vector<int>res ; 
    while(low < m && high < n ){
        if(nums1[low]<nums2[high]){
            res.push_back(nums1[low]);
            low++ ;
        }
        else {
            res.push_back(nums2[high]);
            high++ ; 
        }
    }
    while (low < m){
      res.push_back(nums1[low]);
            low++   ;
    }
    while (high < n ){
        res.push_back(nums2[high]);
        high++; 
    }
    nums1 = res ; 
    }

};