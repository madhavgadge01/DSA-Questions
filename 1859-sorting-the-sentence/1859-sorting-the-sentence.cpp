class Solution {
public:
    string sortSentence(string s) {
        vector<string> arranged(9);
        string word = "";

        for (int i = 0; i <= s.length(); i++) {

            if (i < s.length() && s[i] != ' ') {
                word += s[i];
            } 
            else {
                int position = word.back() - '0';

                word.pop_back();

                arranged[position - 1] = word;

                word = "";
            }
        }

        string ans = "";

        for (int i = 0; i < 9; i++) {
            if (arranged[i] != "") {

                if (ans != "") {
                    ans += " ";
                }

                ans += arranged[i];
            }
        }

        return ans;
    }
};