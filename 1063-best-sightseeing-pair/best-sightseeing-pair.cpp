class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxval=values[0]+0;
        int ans=INT_MIN;
        int n=values.size();

        for(int i=1;i<n;i++){
            ans=max(ans,maxval+values[i]-i);
            maxval=max(maxval,values[i]+i);
        }

        return ans;
    }
};