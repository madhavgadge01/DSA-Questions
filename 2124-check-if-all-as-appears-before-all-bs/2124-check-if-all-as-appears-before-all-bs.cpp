class Solution {
public:
    bool checkString(string s) {
        bool checkB = false;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == 'b') {
                checkB = true;
            }

            else if (s[i] == 'a' && checkB == true) {
                return false;
            }
        }

        return true;
    }
};