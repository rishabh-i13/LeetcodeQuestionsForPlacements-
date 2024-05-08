class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;
        vector<int> v;
        v=score;
        sort(v.rbegin(),v.rend());
        map<int,int> mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]]=i;
        }
        for(int i=0;i<score.size();i++){
            if(mp[score[i]]==0) ans.push_back("Gold Medal");
            else if(mp[score[i]]==1) ans.push_back("Silver Medal");
            else if(mp[score[i]]==2) ans.push_back("Bronze Medal");
            else{
                ans.push_back(to_string(mp[score[i]]+1));
            }
        }
        return ans;

    }
};