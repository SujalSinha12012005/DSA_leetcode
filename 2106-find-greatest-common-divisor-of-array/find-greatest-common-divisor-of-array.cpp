class Solution {
public:
    int find_gcd (int a, int b){
        while (b){
            int rem = a%b ; 
            a = b ; 
            b = rem ;
        }
        return a ; 

    }
    int findGCD(vector<int>& nums) {
        int mini = nums[0]; 
        int maxi = nums[0] ; 
        for(int i = 1 ; i< nums.size() ; i++){
            mini = min(mini , nums[i]) ; 
            maxi = max(maxi , nums[i]) ; 
        }
        int res = find_gcd(mini , maxi);
        return res ; 
        
    }
};