class Solution {
public:
    bool checkDivisibility(int n) {
        int num = n ; // preserve the number since after loop it n will become 0 
        int sum_digit = 0 ;
       int  product = 1 ;  
        while(n){
            int rem = n % 10 ; 
            sum_digit += rem ; 
            product *= rem ; 
            n = n/ 10 ;  
        }
       
        return  num % (sum_digit + product) == 0 ;
    }
};