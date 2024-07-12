class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        int n=s.size();
        int count_ab=0, count_ba=0;
        bool flag=false;
        if(x>y){
            flag=true;
        }
        for(int i:s){
            if(st.empty()==1 or(i!='a' and i!='b')){
                st.push(i);
            }
            else if(flag){
                if(i=='b' and st.top()=='a') {
                    count_ab++;
                    st.pop();
                }
                else st.push(i);
            }
            else if(!flag){
                if(i=='a' and st.top()=='b'){
                    count_ba++;
                    st.pop();
                }
                else st.push(i);
            }
        }
        string s2="";
        while(!st.empty()){
             s2+=st.top();
             st.pop();   
        }
        reverse(s2.begin(),s2.end());
        stack<char> st2;
        for(int i:s2){
            if(st2.empty()==1 or(i!='a' and i!='b')){
                st2.push(i);
            }
            else if(!flag){
                if(i=='b' and st2.top()=='a') {
                    count_ab++;
                    st2.pop();
                }
                else st2.push(i);
            }
            else if(flag){
                if(i=='a' and st2.top()=='b'){
                    count_ba++;
                    st2.pop();
                }
                else st2.push(i);
            }
        }
        int gain= count_ab*x +count_ba*y;
        return gain;

    }
};