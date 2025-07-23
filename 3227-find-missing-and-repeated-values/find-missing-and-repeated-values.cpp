class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();

        int m=n*n;
        int sum_m=m*(m+1)/2;
        long long int sum_m2= 1LL * m*(m+1)*(2*m+1)/6;

        int real_sum=0;
        long long int real_sum2=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                real_sum+=grid[i][j];
                real_sum2+=(grid[i][j]*grid[i][j]);
            }
        }

        // x be missing and y be repeating
        int x=0,y=0;

        long long int diff=sum_m-real_sum;
        long long int sum_x_y=(sum_m2-real_sum2)/diff;

        x=(sum_x_y+diff)/2;
        y=(sum_x_y-diff)/2;

        return {y,x};

    }
};