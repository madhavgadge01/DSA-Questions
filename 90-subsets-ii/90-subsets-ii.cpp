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

           int idx = i+1;
           while(idx<nums.size()&& nums[idx]==nums[idx-1]){
            idx++;
           }
           allSubsets(nums, ans, idx, getallsubset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
      
        vector<vector<int>> getallsubset;
        vector<int> ans;
sort(nums.begin(), nums.end());
        allSubsets(nums, ans, 0, getallsubset);

        return getallsubset;
     
    }
};







