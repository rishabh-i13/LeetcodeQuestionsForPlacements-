class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows==1) return ans;
        ans.push_back({1,1});
        if(numRows==2) return ans;
        int n=numRows-2;
        for(int i=0;i<n;i++){
            vector<int> temp;
            temp.push_back(1);
            for(int j=0;j<ans[i+1].size()-1;j++){
                temp.push_back(ans[i+1][j]+ans[i+1][j+1]);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }

        return ans;
    }
};