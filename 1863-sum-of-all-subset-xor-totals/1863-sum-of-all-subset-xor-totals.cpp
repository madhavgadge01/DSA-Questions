class Solution {
public:
   
    int calSum(vector<int>& nums, int i, int currentXor) {
       
        if (i == nums.size()) {
            return currentXor;
        }

       
        int take = calSum(nums, i + 1, currentXor ^ nums[i]);

        int notTake = calSum(nums, i + 1, currentXor);

       
        return take + notTake;
    }

    int subsetXORSum(vector<int>& nums) {
      
        return calSum(nums, 0, 0);
    }
};