class Solution {
public:
    bool isMagic(vector<vector<int>>& grid,pair<int,int> p,int rows,int cols){
        int i=p.first;
        int j=p.second;
        if(i+2>=rows or j+2>=cols) return false;
        int x=i,y=j;
        vector<int> v;
        for(int m=x;m<=i+2;m++){
            for(int n=y;n<=j+2;n++){
                v.push_back(grid[m][n]);
            }
        }
        sort(begin(v),end(v));
        bool flag=true;
        for(int k=0;k<v.size();k++){
            if(v[k]!=k+1){
                return false;
            }
        }
        int r1=grid[i][j]+grid[i][j+1]+grid[i][j+2];
        int r2=grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2];
        int r3=grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];

        int c1=grid[i][j]+grid[i+1][j]+grid[i+2][j];
        int c2=grid[i][j+1]+grid[i+1][j+1]+grid[i+2][j+1];
        int c3=grid[i][j+2]+grid[i+1][j+2]+grid[i+2][j+2];

        int d1=grid[i][j]+grid[i+1][j+1]+grid[i+2][j+2];
        int d2=grid[i][j+2]+grid[i+1][j+1]+grid[i+2][j];

        bool temp=true;
        if(r1==r2 and r2==r3 and r3==c1 and c1==c2 and c2==c3 and c3==d1 and d1==d2) temp=true;
        else temp=false;

        if(flag and temp) return true;
        else return false;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(isMagic(grid,{i,j},rows,cols)==true) count++;
            }
        }

        return count;
    }
};