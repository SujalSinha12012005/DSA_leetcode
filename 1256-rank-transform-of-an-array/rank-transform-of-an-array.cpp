class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> temp = arr ; 
        sort(temp.begin() , temp.end()); //sort first 
        int rank = 1; 
        map<int , int>f ; 
        for(int i =0 ; i< temp.size() ; i++){
            if(f.find(temp[i]) == f.end()){ //to handel dublicate value 
                f[temp[i]] = rank ; 
                rank++ ; 
            }
        } // rank as per sorted 
        for(int i =0 ; i<arr.size() ; i++){
            arr[i] = f[arr[i]];
        }
        return arr ;   
    }
};