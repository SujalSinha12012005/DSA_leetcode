class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i =0 , j =0 ; // for moving idx by idx in v1 and v2 ; 
        int n = version1.size() , m = version2.size() ; 

        while( i < n || j < m){
            int num1 =0 ; 
            while(i < n && version1[i] != '.'){ // before . find the v1 value  
                num1 = num1 * 10 + (version1[i] - '0') ; 
                i++ ; 
            }

            int num2 = 0 ; // for finding val before . for v2 
            while(j < m && version2[j] != '.'){
                num2 = num2 * 10 + (version2[j] - '0') ; // before . find the v2 value
                j++ ; 
            }

            if(num1 > num2){
                return 1 ; 
            }
            if(num1 < num2){
                return  -1 ; 
            }
            i++ ; 
            j++ ; 

        }
        return 0 ; 

    }
};