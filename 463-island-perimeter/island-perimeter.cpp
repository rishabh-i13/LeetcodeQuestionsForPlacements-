class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans =0;
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++){
            int count=0;
            for( int j=0;j<m;j++){
                if(grid[i][j]==1){
                    if(j==0 || j>0 and grid[i][j-1]==0) count++;
                    if(i==0 || i>0 and grid[i-1][j]==0) count++;
                    if(j==m-1 || j<m-1 and grid[i][j+1]==0) count++;
                    if(i==n-1 || i<n-1 and grid[i+1][j]==0) count++;
                }
            }
            ans+=count;
        }

        return ans;
    }
};