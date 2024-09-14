class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        int n=ast.size();

        for(int i=0;i<n;i++){
            if(ast[i]>0) st.push(ast[i]);
            else{
                while(st.empty()==false and st.top()<abs(ast[i]) and st.top()>0){
                    st.pop();
                }
                if(!st.empty() and (st.top()==abs(ast[i]))){
                    st.pop();
                    continue;
                }
                if(st.empty() or st.top()<0){
                    st.push(ast[i]);
                }
            }
        }
        vector<int> v;
        while(st.empty()==false){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};