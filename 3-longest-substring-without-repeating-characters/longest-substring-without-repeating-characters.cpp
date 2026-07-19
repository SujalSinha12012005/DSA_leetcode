class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int low =0 ; 
       map<char , int >freq ; 
       int res = 0;
      for (int high =0 ;  high < s.size(); high ++){
        freq[s[high]]++;
        while(freq[s[high]]>1){
            freq[s[low]]-- ; 
            if(freq[s[low]]==0){
                freq.erase(s[low]);
            }
            low++;
        }
        int len = high-low +1;
         res=max(len,res);
      }
      if(res==INT_MAX){
        return 0;
      }
      return res ;
        
    }
};