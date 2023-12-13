class Solution {
public:

    int working(vector<vector<int>>& mat,int x){
        int sumcol=0;
        for( auto &row :mat){
            sumcol+=row[x];
        }
        return sumcol;
    }
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();

        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    int s=accumulate(mat[i].begin(), mat[i].end(), 0);
                    int t=working(mat,j);
                    if(s==1 and t==1){
                        ans++;
                    }
                }
            }
        }

        return ans;
    }
};