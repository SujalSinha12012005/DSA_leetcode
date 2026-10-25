class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair <int , int>>pq ;// max heap pair of diff w.r.t to x - arr[i] , and arr itself
        for(int i =0 ; i< arr.size() ; i++){
            int diff = abs(arr[i]- x);
            pq.push({diff , arr[i]}) ; //push pair of diff and arr 

            while(pq.size() > k){ // if exceeded pop it 
                pq.pop() ; 
            } 
        }
        vector<int>ans ; // since return type is vector so store ans in vector

        while(!pq.empty()){
            ans.push_back(pq.top().second); //store answer which has just the element since we need to return element not the diff 
            pq.pop() ; 
        }

    
        sort(ans.begin() , ans.end()); // use of sorting since we need to return sorted ans mentioned 
        return ans ; 
    }
};