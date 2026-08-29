class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
         int count =0;

            for(int j=0;j<words.size();j++){
                if (s.starts_with(words[j])){
                    count ++;
                }}
                return count;
    }
};