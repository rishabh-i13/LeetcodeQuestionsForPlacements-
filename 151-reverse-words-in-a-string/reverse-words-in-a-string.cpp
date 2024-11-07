class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int n= s.size();
        int j=0;
        while(j<n){
            if(s[j]==' '){
                j++;
                continue;
            }
            // int i=j;
            string t="";
            while(s[j]!=' ' and j<n){
                t+=s[j];
                j++;
            }
            st.push(t);
            // j=i;
        }
        string ans=st.top();
        st.pop();

        while(!st.empty()){
            ans=ans+" "+st.top();
            st.pop();
        }
        return ans;
    }
};