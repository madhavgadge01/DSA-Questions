class Solution {
public:
     void allSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& getallsubset) { 
           if(i == nums.size()){
                getallsubset.push_back(ans); 
                return;
           } 
           ans.push_back(nums[i]);
           allSubsets(nums, ans, i+1, getallsubset);
           ans.pop_back();
           allSubsets(nums, ans, i+1, getallsubset);
    }
     
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> getallsubset;
        vector<int> ans;

        allSubsets(nums, ans, 0, getallsubset);

        return getallsubset;
    }
};