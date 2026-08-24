class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char , int>f ; 
        int task = n+1 ; 
        for(int i =0 ; i<tasks.size() ; i++){
            f[tasks[i]]++  ; //store freq of each 
        }
        int maxfreq = 0 ; 
        for(auto i : f){
            maxfreq = max(maxfreq , i.second) ; //find max freq 
        }
        int count =0 ; 
        for(auto i : f){ // check if two elemts have same freq is yes increment 
            if(maxfreq == i.second){
                count ++ ; 
            }
        }
        // to find size task * gap + count 
        int ans = (maxfreq-1) * task + count ; //maxfreq - 1 = gap
        return max(ans , (int)tasks.size() ) ;   

    }
};