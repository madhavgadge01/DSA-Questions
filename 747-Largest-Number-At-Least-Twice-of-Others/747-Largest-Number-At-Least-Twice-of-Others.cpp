class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        auto it = max_element(nums.begin(), nums.end());

        int maximum = *it;
        int index = it - nums.begin();

        for (int i = 0; i < nums.size(); i++) {
            if (i == index) {
                continue;
            }

            if (maximum < 2 * nums[i]) {
                return -1;
            }
        }

        return index;
    }
};