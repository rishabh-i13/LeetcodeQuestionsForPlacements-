class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        vector<pair<int,char>> v;
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto &it:mp){
            v.push_back({it.second,it.first});
        }

        sort(v.rbegin(),v.rend());

        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].first;j++){
                ans.push_back(v[i].second);
            }
        }
        return ans;
    }
};