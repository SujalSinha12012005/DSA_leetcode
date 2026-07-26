class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      vector<int>res = nums ; 
      bool insert = false ; 
      for(int i =0 ; i< nums.size() ; i++ ){
        if(insert == false && nums[i] > target){
            res.insert(res.begin() + i, target);
            insert = true ; 
        }

      }
      if(insert == false){
        res.push_back(target); 
      }
    for(int i =0 ; i< res.size() ; i++){
        if(res[i] == target){
            return i ; 
        }
    }

        return -1 ; 
    }
};