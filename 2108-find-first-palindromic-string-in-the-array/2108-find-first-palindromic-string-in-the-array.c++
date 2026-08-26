class Solution {
public:
    string firstPalindrome(vector<string>& words) {

        for (int i = 0; i < words.size(); i++) {

            int left = 0;
            int right = words[i].size() - 1;
            bool palindrome = true;

            while (left < right) {

                if (words[i][left] != words[i][right]) {
                    palindrome = false;
                    break;
                }

                left++;
                right--;
            }

            if (palindrome) {
                return words[i];
            }
        }

        return "";
    }
};