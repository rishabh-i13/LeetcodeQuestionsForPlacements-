class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            int p = INT_MAX;
            int t;
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < p) {
                    t = j;
                    p = matrix[i][j];
                }
            }
            bool flag=false;
            for(int i=0;i<n;i++){
                if(matrix[i][t]>p){
                    flag=true;
                    break;
                }
            }
            if(!flag){
                ans.push_back(p);
            }
        }
        return ans;
    }
};