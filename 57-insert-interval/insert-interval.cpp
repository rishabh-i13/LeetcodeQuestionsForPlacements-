class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> v;
        int ns=newInterval[0];
        int ne=newInterval[1];
        int n=intervals.size();

        for(int i=0;i<n;i++){
            //case 1: if new Interval is completely leftside of the current interval
            if(ne<intervals[i][0]){
                v.push_back(newInterval);
                copy(intervals.begin()+i,intervals.end(),back_inserter(v));
                return v;
            }
            //case 2 : if new interval is completely rightside of the current interval
            else if(ns>intervals[i][1]){
                v.push_back(intervals[i]);
            }
            //case 3: overlapping
            else{
                newInterval[0]=min(newInterval[0],intervals[i][0]);
                newInterval[1]=max(newInterval[1],intervals[i][1]);
            }
        }
        v.push_back(newInterval);
        return v;
    }
};