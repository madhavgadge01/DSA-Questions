class Solution {
public:
void getPer(vector<int>& nums,vector<vector<int>> &ans,int idx){
    if(idx ==nums.size()){
        return ans.push_back(nums);
        return;
    }
    for(int i =idx;i<nums.size();i++){
      swap(nums[idx],nums[i]);
      getPer(nums, ans,idx+1);

       swap(nums[idx],nums[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        getPer(nums,ans,0);
        return ans;
    }
};