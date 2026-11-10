
class Solution {
public:
    int n;

    bool checkValid(int num, vector<vector<int>>& finalgrid) {

        if(num == n*n - 1) {
            return true;
        }

        int r1 = finalgrid[num][0];
        int c1 = finalgrid[num][1];

        int r2 = finalgrid[num+1][0];
        int c2 = finalgrid[num+1][1];

        int rowDiff = abs(r1-r2);
        int colDiff = abs(c1-c2);

        if ((rowDiff == 2 && colDiff == 1) ||
            (rowDiff == 1 && colDiff == 2)) {

            return checkValid(num+1, finalgrid);
        }

        return false;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {

        n = grid.size();

        if(grid[0][0] != 0) return false;

        vector<vector<int>> finalgrid(n*n);

        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {

                int num = grid[i][j];
                finalgrid[num] = {i,j};
            }
        }

        return checkValid(0, finalgrid);
    }
};
