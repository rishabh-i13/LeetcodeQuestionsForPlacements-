class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> directions={{0,1},{1,0},{0,-1},{-1,0}}; // E,S,W,N

        int steps=0;
        int dir=0;
        vector<vector<int>> ans;
        ans.push_back({rStart,cStart});
        int i=rStart,j=cStart;
        while(ans.size()<rows*cols){
            if(dir==0 or dir==2) steps++;

            for(int ct=0;ct<steps;ct++){
                i+=directions[dir][0];
                j+=directions[dir][1];

                if(i>=0 and i<rows and j>=0 and j<cols){
                    ans.push_back({i,j});
                }
            }

            dir=(dir+1)%4;
        }
        return ans;
    }
};