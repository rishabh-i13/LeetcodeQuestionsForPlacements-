class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());

        ans.push_back(intervals[0]);

        for(int i=1;i<n;i++){
            int m=ans.size();
            vector<int> v=ans[m-1];

            if(v[1]>=intervals[i][0]){
                ans.pop_back();
                if(v[1]>=intervals[i][1]) ans.push_back({v[0],v[1]});
                else ans.push_back({v[0],intervals[i][1]});
            }
            else {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};