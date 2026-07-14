class Solution {
public:
    bool find(string &s , int low , int high){
        while(low < high){
            if(s[low] != s[high]){
                return false ;
            }
            else {
                low ++ ; 
                high -- ;
            }
        }
        return true ; 
    }
    string longestPalindrome(string s) {
        int start = 0 ; 
        int end = 0 ; 
        for(int i =0 ; i< s.size() ; i++){
            for(int j =i ; j<s.size() ;j++){
                bool res = find(s,i,j); 
                int len = j - i +1 ; 
                if(res){
                    if(len > end ){
                        end = len ; 
                        start = i ;
                    }
                }
            }
        }
        return s.substr(start , end);
    }
    
};