class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        int low =1 ; // low not 0 since every child should get atlest one candy 
        int high=0 ; 
        for(int i = 0 ; i< candies.size() ; i++){
            high = max(candies[i] , high); // high is max candy one can get 
        }

        int ans =0 ; 
        while(low<= high){
            int mid = low + (high - low ) /2 ; 
            long long count =0 ; 
            for(int i =0 ; i<candies.size() ; i++){
                count += candies[i]/mid ; 
            }
            if(count >= k){//we can allot more candy since count is more than num of child  so move left 
                ans = mid ; 
                low = mid +1 ; 
            }
            else { //less count than req child so reduce number of candy 
                high = mid -1 ; 
            }

        }
        return ans; 
    }
};