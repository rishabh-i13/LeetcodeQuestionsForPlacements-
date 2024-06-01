class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        vector<pair<char,int>> v;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            v.push_back(it);
        }

         sort(v.begin(), v.end(), [](const auto &a, const auto &b) {
            return a.second > b.second;
        });

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].second;j++){
                ans.push_back(v[i].first);
            }
        }
        return ans;
    }
};