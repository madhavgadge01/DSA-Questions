class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1;
        long long high = n;

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            long long required = mid * (mid + 1) / 2;

            if (required == n) {
                return mid;
            }
            else if (required < n) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return high;
    }
};