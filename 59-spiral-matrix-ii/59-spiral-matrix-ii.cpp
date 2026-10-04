class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
 
        vector<vector<int>> ans(n, vector<int>(n));
        
        int srow = 0;
        int scol = 0;
        int erow = n - 1;
        int ecol = n - 1;
        int r = 1;

        while (srow <= erow && scol <= ecol) {
            
            
            for(int i = scol; i <= ecol; i++) {
                ans[srow][i] = r++; 
            }
            srow++;

           
            for(int i = srow; i <= erow; i++) {
                ans[i][ecol] = r++;
            }
            ecol--;

           
            if (srow <= erow) {
                for(int i = ecol; i >= scol; i--) {
                    ans[erow][i] = r++;
                }
                erow--;
            }

           
            if (scol <= ecol) {
                for(int i = erow; i >= srow; i--) {
                    ans[i][scol] = r++;
                }
                scol++;
            }
        }

        return ans;
    }
};