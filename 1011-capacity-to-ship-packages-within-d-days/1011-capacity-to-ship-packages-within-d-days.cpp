class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);

        int ans = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int requiredDay = 1;
            int currentWeight = 0;

            for (int i = 0; i < weights.size(); i++) {

                if (currentWeight + weights[i] <= mid) {
                    currentWeight += weights[i];
                } 
                else {
                    requiredDay++;
                    currentWeight = weights[i];
                }
            }

            if (requiredDay <= days) {
               
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