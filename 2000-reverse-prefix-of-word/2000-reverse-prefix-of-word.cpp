class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans = "";
        int index = word.find(ch);
          if (index == string::npos) {
            return word;
        }
          
        for(int i =index;i>=0;i--){
           
            ans += word[i];
        }
        for(int j=index+1;j<word.length();j++){
            ans += word[j];
        }
        return ans;
    }
};