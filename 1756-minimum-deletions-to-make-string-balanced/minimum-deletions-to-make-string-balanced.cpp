class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int count=0;
        stack<char> st;
         for(auto i : s){
            if(!st.empty() and (i=='a' && st.top()=='b')){
                count++;
                st.pop();
            }
            else st.push(i);
        }
        return count;
    }
};