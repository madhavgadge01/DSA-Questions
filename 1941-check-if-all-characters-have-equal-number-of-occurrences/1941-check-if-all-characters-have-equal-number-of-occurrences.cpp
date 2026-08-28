class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int firstFreq = 0;
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        for (int j = 0; j < 26; j++) {
            if (freq[j] != 0) {

                if (firstFreq == 0) {
                    firstFreq = freq[j];
                }

               
                else if (freq[j] != firstFreq) {
                    return false;
                }
            }
        }

        return true;
    }
};