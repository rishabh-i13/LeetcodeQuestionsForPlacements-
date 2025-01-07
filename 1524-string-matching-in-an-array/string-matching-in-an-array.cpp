class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        int n=words.size();
        vector<string> v;
        unordered_set<string> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(words[j].find(words[i]) != string::npos and words[i]!=words[j]){
                    if(st.find(words[i])==st.end()){
                        st.insert(words[i]);
                        v.push_back(words[i]);
                    }
                    
                }
            }
        }
        return v;
    }
};