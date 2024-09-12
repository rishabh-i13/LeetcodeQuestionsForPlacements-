class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        unordered_map<char,int> mp;
        for(auto x:allowed) mp[x]++;

        int ans=0;
        for(int i=0;i<n;i++){
            int ct=0;
            for(int j=0;j<words[i].size();j++){
               if(mp.find(words[i][j])!=mp.end()) ct++;
            }
            if(ct==words[i].size()) ans++;
        }

        return ans;
    }
};