class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r, vector<int>(c));
        vector<int> temp;
        int n= mat.size();
        int m = mat[0].size();
        if(mat.size() * mat[0].size() != r * c){
            return mat;
        }
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                temp.push_back(mat[i][j]);
            }
        }
        int k =0;

        for(int i =0;i<r;i++){
            for(int j =0;j<c;j++){
                ans[i][j]= temp[k];
                k++;
            }
        }
     return ans;
    }
};