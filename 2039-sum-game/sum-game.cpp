class Solution {
public:
    bool sumGame(string num) {

        int sum_first_half =0 ; 
        int sum_second_half =0 ;

        int n = num.size() /2 ; 
        int fq =0 , sq = 0;  

        for(int i =0 ; i<n ; i++){ //sum of left part 
            if(num[i] == '?' ){
               fq ++ ; 
            }
            else {
            sum_first_half += num[i] - '0' ; 
            }
        }

        for(int i = n ; i< num.size() ; i++){//sum of right part 
            if(num[i] == '?' ){
               sq++ ;  
            }
            else {
            sum_second_half += num[i] -'0' ; 
            } 
        }

        int diff = abs(fq - sq ); 
        if (diff % 2 != 0){  // when fq and sq are not equal 
            return true ;
        }
        if (sum_first_half - sum_second_half
            == 9 * (sq - fq) / 2) {
            return false;
        }
        return true ; 
    }
};