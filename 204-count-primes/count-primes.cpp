class Solution {
public:
 int countPrimes(int n) {
     if(n<=2) return 0 ; 
     vector<bool>prime(n,true) ; // initially all are prime asssume 
     prime[0]= false ; 
     prime[1] = false ; 

     for(int i = 0 ; i*i<n ; i++){
        if(prime[i]){ //when prime 
        for(int j = i*i ; j< n ; j=i+j){ // when that num is prime make rest factors of that num prime j=j+i to move to each factor 
        prime[j] = false ; 
          }
        }
     }
     int count =0 ; 
     for(int i =0 ; i< n ; i++){
        if(prime[i] == true ){ //to count all the prime num after making all factor true 
            count ++ ;
        }
     }
     return count ; 

    }
};


   

  /*bool check (int n){
        if(n ==0 or n==1) return false ; 
        for(int i =2; i*i<=n ; i++){ //check each number prime or not 
            if(n%i==0){
                return false ;
            }
        }
        return true ; 
    }
    int countPrimes(int n) {
        int count = 0 ; 
        for(int i = 2 ; i < n ; i++){ //count number of prime less than n 
            if(check(i)){
                count ++ ;
            }
        }
        return count ;  */