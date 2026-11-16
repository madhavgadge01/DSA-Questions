class Solution {
public:
    void sumOne(int k, int n, vector<vector<int>>& ans,
                vector<int>& temp, int sum, int i) {

        if (temp.size() == k) {
            if (sum == n) {
                ans.push_back(temp);
            }
            return;
        }

        for (int j = i; j <= 9; j++) {

            if (sum + j > n) {
                break;
            }

            temp.push_back(j);

            sumOne(k, n, ans, temp, sum + j, j + 1);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;

        sumOne(k, n, ans, temp, 0, 1);

        return ans;
    }
};