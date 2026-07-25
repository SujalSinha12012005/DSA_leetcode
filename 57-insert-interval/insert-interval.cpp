class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res ;
        sort(intervals.begin() , intervals.end());  
        bool insert= false ; 
        for(int i =0 ; i<intervals.size() ; i++){ //to add new interval in interval
            if(insert == false && intervals[i][0] >newInterval[0] ){
                res.push_back({newInterval[0] , newInterval[1]}) ; 
                insert = true  ; 
            }
            res.push_back({ intervals[i][0] , intervals[i][1]} ); 
        }
        if(insert==false ){
            res.push_back({newInterval[0] , newInterval[1]}) ; 
        }

        int start1 = res[0][0]; 
        int end1 = res[0][1] ; 
        vector<vector<int>>ans ;

        for(int i =1 ; i<res.size() ; i++){ //to fix overlapping 
            int start2 = res[i][0]; 
            int end2 = res[i][1] ; 
            if(end1 >= start2){ //when overlapping 
                start1 = start1 ; 
                end1 = max(end1 , end2 ); 
            }
            else { //when no overlapping 
                ans.push_back({start1 , end1 }); 
                start1 = start2 ; 
                end1 = end2 ; 
            }

        }
        ans.push_back({start1 , end1 }); // for last interval insertion 
        return ans ; 



    }
};