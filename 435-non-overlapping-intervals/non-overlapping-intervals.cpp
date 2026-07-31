class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end());
        int s1 =  intervals[0][0]; 
        int e1 =  intervals[0][1]; 
       // vector<vector<int>>res ; 
        int count = 0 ; 
        for(int i = 1 ; i< intervals.size() ; i++){
            int s2 =  intervals[i][0]; 
            int e2 =  intervals[i][1]; 

            if(e1> s2){
                count ++ ;
                s1 = s1; 
                e1 = min(e1 , e2); 
            }
            else{
            //res.push_back({s1 , e2 }); 
            s1 = s2 ; 
            e1 = e2 ;
            }
        }
        return count ;
    }
};