class Solution {
public:
    string toLowerCase(string s) {
        string out = "";

        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
            out += s[i];
        }

        return out;
    }
};