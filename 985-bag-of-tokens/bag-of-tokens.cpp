class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score =0 ; 
        sort(tokens.begin() , tokens.end()) ; 
        int low =0 , high = tokens.size() -1 ;
        int ans =0 ; 
        while(low<=high){
            if(power >= tokens[low]){ // when power more 
                score ++ ; 
                power-=tokens[low] ; 
                low++ ;
                ans = max(ans , score ) ; 
            }
            else if(score > 0){//power<tokens[low] //when poer less
                score -- ; 
                power+=tokens[high] ; 
                high-- ; 
            }

            else { // score is 0 and power is less then 
                break ; 
            }
        } 
        return ans ; 

    }
};