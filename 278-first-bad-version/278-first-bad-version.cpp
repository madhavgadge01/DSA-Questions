class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int ans = n;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            bool bad = isBadVersion(mid);

            if (bad == true) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }
};