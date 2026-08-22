class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;

        for (int num : arr) {
            freq[num]++;
        }

        unordered_set<int> seen;

        for (auto it : freq) {
            int count = it.second;

            if (seen.find(count) != seen.end()) {
                return false;
            }

            seen.insert(count);
        }

        return true;
    }
};