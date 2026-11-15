class Solution {
public:
 void letterCasePermutation(string s, vector<string>& ans, int i, string temp){
 if(i == s.size()) {
    ans.push_back(temp);
    return;
}
if(isalpha(s[i])){
   temp[i] = tolower(s[i]);
letterCasePermutation(s, ans, i + 1, temp);

temp[i] = toupper(s[i]);
letterCasePermutation(s, ans, i + 1, temp);
}
else{
       temp[i] = s[i]; 
       letterCasePermutation(s, ans, i + 1, temp);

}


    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string temp=s;
        letterCasePermutation(s,ans,0,temp);
       return ans;
    }
};