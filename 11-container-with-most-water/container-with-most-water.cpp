class Solution {
public:
    int maxArea(vector<int>& height) {
      int low = 0 , high = height.size() -1 ; 
      int profit = 0 ; 
      while(low < high){
        int lenght = min(height[low] , height[high]); 
        int width = high - low ; 
        int area = lenght * width ; 
        profit = max(profit , area) ; 
        if(height [low] < height[high]){
            low++ ;
        }
        else {
            high -- ; 
        }
      }
      return profit ; 
    }
};