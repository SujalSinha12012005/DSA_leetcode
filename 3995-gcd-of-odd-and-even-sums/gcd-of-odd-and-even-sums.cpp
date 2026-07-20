class Solution {
public:
    int gcd (int a , int b){
        while(b){
            int rem = a%b ; 
            a=b ; 
            b = rem ; 
        }
        return a ; 
    }
    int gcdOfOddEvenSums(int n) {
        int even = n*(n+1) ; 
        int odd = n*n ; 
        int res = gcd(even , odd); 
        return res ; 
        
        
    }
};