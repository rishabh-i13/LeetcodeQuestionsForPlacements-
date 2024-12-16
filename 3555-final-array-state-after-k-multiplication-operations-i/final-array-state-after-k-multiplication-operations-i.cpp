class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        int n=nums.size();
        vector<int> ans(n,0);
        set<pair<int,int>> st;

        for(int i=0;i<n;i++){
            st.insert({nums[i],i});
        }
        while(k--){
            auto p=*st.begin();
            pair<int,int> q={p.first*multiplier,p.second};
            st.erase(p);
            st.insert(q);
        }

        while(st.size()>0){
            auto p=*st.begin();
            ans[p.second]=p.first;
            st.erase(p);
        }
        return ans;
    }
};