class Solution {
public:
    string reverseParentheses(string s) {
        stack<pair<char,int>> st;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push({'(',i});
            else if(s[i]==')'){
                auto tp=st.top();
                st.pop();
                int x=tp.second+1;
                int y=i;
                reverse(s.begin() + x, s.begin() + y);
            }
            else continue;
        }

        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='(' or s[i]==')') continue;
            else ans+=s[i];
        }

        return ans;
    }
};