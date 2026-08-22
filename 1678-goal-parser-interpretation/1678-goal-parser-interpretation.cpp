class Solution {
public:
    string interpret(string command) {
        int n =command.length();
        string outpute="";
        for(int i=0;i<n;i++){
            if(command[i]=='G'){
            outpute+="G";
            }else if(command[i]=='('&& command[i+1]==')'){
                outpute+="o";
            }
            else if(command[i]=='('&& command[i+1]=='a'){
                outpute+="al";
            }
        }
        return outpute;
    }
};