class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<int> ans; 
        
        for(int i = 0; i < n; i++) {
            
            int minVal = INT_MAX; 
            int minCol = -1;
            
            for(int j = 0; j < m; j++) {
                if(mat[i][j] < minVal) {
                    minVal = mat[i][j];
                    minCol = j; 
                }
            }
            
           
            bool isLucky = true;
            for(int k = 0; k < n; k++) {
               
                if(mat[k][minCol] > minVal) { 
                    isLucky = false; 
                    break;         
                }
            }
            
        
            if(isLucky == true) {
                ans.push_back(minVal);
            }
        }
        
        return ans;
    }
};