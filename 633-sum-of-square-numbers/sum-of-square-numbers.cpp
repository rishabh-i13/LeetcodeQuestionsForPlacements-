class Solution {
public:
    bool judgeSquareSum(int c) {
        long long int k=sqrt(c);
        unordered_set<long long int> st;
        for(int i=0;i<=k;i++){
            st.insert(i*i);
        }

        for(int i=0;i<=k;i++){
            long long temp=i*i;
            if(st.find(c-temp)!=st.end()) return true;
        }

        return false;
    }
};