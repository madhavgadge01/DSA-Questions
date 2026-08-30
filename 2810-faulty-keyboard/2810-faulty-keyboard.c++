class Solution {
public:
    string finalString(string s) {
   string str="";
        for(int i=0;i<s.length();i++){
          
            if(s[i]!='i'){
                str+=s[i];
            }
            else if(s[i]=='i'){
          reverse(str.begin(), str.end());
            
            }
        }
        return str;
    }
};