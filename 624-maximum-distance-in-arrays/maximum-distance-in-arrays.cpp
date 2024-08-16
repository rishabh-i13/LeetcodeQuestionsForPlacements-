class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();

        int maxi=arrays[0][arrays[0].size()-1];
        int mini=arrays[0][0];

        int ans=0;

        for(int i=1;i<n;i++){
            ans=max(ans,abs(maxi-arrays[i][0]));
            ans=max(ans,abs(mini-arrays[i][arrays[i].size()-1]));

            maxi=max(maxi,arrays[i][arrays[i].size()-1]);
            mini=min(mini,arrays[i][0]);
        }
        return ans;
    }
};