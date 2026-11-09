class Solution {
public:

  void solve(int i, vector<int>& nums, int tar, vector<int>& temp, vector<vector<int>>& ans) {
        if (tar == 0) {
            ans.push_back(temp);
            return;
        }    
        if (tar < 0 || i == nums.size()) {
            return;
        }  
        temp.push_back(nums[i]);
     
        solve(i+1, nums, tar - nums[i], temp, ans); 
        
      
        temp.pop_back();
 while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
    i++;
}
        solve(i + 1, nums, tar, temp, ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>> ans;
        vector<int> temp; 
             sort(candidates.begin(), candidates.end());
        solve(0, candidates, target, temp, ans);
        
        return ans;  
    }
};



