class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        
        vector<int> rowTrack(m, 0);
        vector<int> colTrack(n, 0);
        
      
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    rowTrack[i] = 1;
                    colTrack[j] = 1;
                }
            }
        }
        
       
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rowTrack[i] == 1 || colTrack[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};