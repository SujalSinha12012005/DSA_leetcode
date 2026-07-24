class Solution {
public:
    bool isvowel (char c ){
            if(c== 'a' or c == 'e' or c== 'i' or c == 'o' or c =='u'){
                return true ;
        }
        return false ; 

    }
    int maxVowels(string s, int k) {
        int low =0 , high = k-1 ; //fixed window 
        int count =0 ; 
        int res =0 ; 
        for(int i =0 ; i< k ; i++){
            if(isvowel(s[i])){  //that is when true 
                count ++ ;
            }
        }
        while(high < s.size()){
            res = max(res , count ); 
            low++ ; 
            high ++ ; //shift 
            if(high == s.size()){
                break ; 
            }
            if(isvowel(s[low-1])){
                count -- ;
            }
            if(isvowel(s[high])){
                count ++ ; 
            }
        }
        return res; 
    }
};