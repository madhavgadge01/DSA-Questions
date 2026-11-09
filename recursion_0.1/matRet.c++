#include <iostream>
#include <vector>

using namespace std;


void helper(vector<vector<int>>& mat, int r, int c, vector<string>& ans, string path){
    int n = mat.size();       
    int m = mat[0].size();  

    if(r < 0 || c < 0 || r >= n || c >= m || mat[r][c] == 0 || mat[r][c] == -1){
        return;
    }
    

    if(r == n-1 && c == m-1){
        ans.push_back(path);
        return;
    }
    

    mat[r][c] = -1;
  
    helper(mat, r+1, c, ans, path+"D"); // Down
    helper(mat, r-1, c, ans, path+"U"); // Up
    helper(mat, r, c+1, ans, path+"R"); // Right (c+1 is Right)
    helper(mat, r, c-1, ans, path+"L"); // Left  (c-1 is Left)
       
    mat[r][c] = 1;
}

vector<string> findPath(vector<vector<int>>& mat){
    vector<string> ans;
    string path = "";
    helper(mat, 0, 0, ans, path);
    return ans;
}

int main(){
    vector<vector<int>> mat = {{1,0,0,0}, {1,1,0,0}, {0,1,1,1}};
    vector<string> ans = findPath(mat);
    
    for(string path : ans){
         cout << path << endl;
    }
    
    return 0;
}