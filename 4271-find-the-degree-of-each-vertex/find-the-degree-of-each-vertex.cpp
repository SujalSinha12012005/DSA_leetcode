class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size() ; 
        vector<int>ans ; 
        for(int i =0 ; i< n ;i++){
            int degree =0 ; 
            for(int j =0 ; j < n ; j++){
                if(matrix[i][j] == 1){ //conected 
                    degree ++ ; 
                }
            }
            ans.push_back(degree);
        }
        return ans ; 
    }
};