class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";

        int ct=0;
        for(char c:s){
            if(c=='(' and ct==0) ct++;
            else if(c=='(' and ct>=1){
                result+=c;
                ct++;
            }
            else if(c==')' and ct>1){
                result+=c;
                ct--;
            }
            else if(c==')' and ct==1){
                ct--;
            }   
        }
        return result;
    }
};