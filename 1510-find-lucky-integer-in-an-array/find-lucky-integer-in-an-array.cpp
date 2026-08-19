class Solution {
public:
    int findLucky(vector<int>& arr) {

        int ans =-1; 
        map<int , int>f ; 

        for(int i =0 ; i< arr.size() ; i++){
            f[arr[i]]++ ;
        }
        for(auto i : f){
            if(i.first == i.second){
                ans = i.first ; 
            }
        }
        
        return ans ; 
    }
};