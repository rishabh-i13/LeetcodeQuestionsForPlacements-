class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        stack<char> st;

        for(int i=0;i<n;i++){
            if(!st.empty() and abs(s[i]-st.top())==32){
                st.pop();
            }
            else  st.push(s[i]);
        }
        string x="";
        while(!st.empty()){
            x=st.top()+x;
            st.pop();
        }

        return x;
    }
};