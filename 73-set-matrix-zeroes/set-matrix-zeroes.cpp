class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> sti;
        set<int> stj;

        int n=matrix.size();
        int m=matrix[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    sti.insert(i);
                    stj.insert(j);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(sti.find(i)!=sti.end() or stj.find(j)!=stj.end()){
                    matrix[i][j]=0;
                }
            }
        }
    }
};