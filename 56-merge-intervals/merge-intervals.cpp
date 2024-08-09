class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(begin(intervals),end(intervals));
        int first=intervals[0][0];
        int second=intervals[0][1];
        vector<vector<int>> ans;

        for(int i=1;i<intervals.size();i++){
            if(second>=intervals[i][0] and second<=intervals[i][1]){
                second=intervals[i][1];
            }
            else if(second>=intervals[i][0] and second>=intervals[i][1]){
                continue;
            }
            else{
                ans.push_back({first,second});
                first=intervals[i][0];
                second=intervals[i][1];
            }
        }
        ans.push_back({first,second});
        return ans;
    }
};