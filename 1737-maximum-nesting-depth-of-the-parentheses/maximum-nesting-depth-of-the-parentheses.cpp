class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(!st.empty()){
                if(s[i]=='(') st.push(s[i]);
                else if(s[i]==')' and st.top()=='(') st.pop();
            }
            else if(s[i]=='(') st.push(s[i]);
            
            int sz=st.size();
            count=max(count,sz);
        }
        return count;
    }
};