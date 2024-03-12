class Solution {
public:
    string removeDuplicates(string s) {
        if(s.length()==1) return s;
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(st.empty()==1 or st.top()!=s[i]){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
        }

        string ans="";
        while(st.empty()==0){
            char x=st.top();
            ans+=x;
            st.pop();
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};