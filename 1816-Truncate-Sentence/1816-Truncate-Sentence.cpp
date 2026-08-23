class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";
        int wordCount = 1;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == ' ') {
                if (wordCount == k) {
                    break;
                }
                wordCount++;
            }

            ans += s[i];
        }

        return ans;
    }
};