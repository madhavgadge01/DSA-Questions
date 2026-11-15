
class Solution {
    void checkCount(vector<int>& nums, int i, int tar, int sum, int &count) {

        // Base case
        if(i == nums.size()) {
            if(sum == tar) {
                count++;
            }
            return;
        }

        // Choice 1: Add positive
        checkCount(nums, i + 1, tar, sum + nums[i], count);

        // Choice 2: Add negative
        checkCount(nums, i + 1, tar, sum - nums[i], count);
    }

public:
    int findTargetSumWays(vector<int>& nums, int tar) {
        int count = 0;
        int sum = 0;

        checkCount(nums, 0, tar, sum, count);

        return count;
    }
};
