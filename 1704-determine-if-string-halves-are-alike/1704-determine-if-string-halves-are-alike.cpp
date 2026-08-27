class Solution {
public:
    bool halvesAreAlike(string s) {
        int firstHalf = 0;
        int secondHalf = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            char ch = tolower(s[i]);

            bool isVowel = (ch == 'a' || ch == 'e' || ch == 'i' ||
                            ch == 'o' || ch == 'u');

            if (isVowel) {
                if (i < n / 2) {
                    firstHalf++;
                } else {
                    secondHalf++;
                }
            }
        }

        return firstHalf == secondHalf;
    }
};