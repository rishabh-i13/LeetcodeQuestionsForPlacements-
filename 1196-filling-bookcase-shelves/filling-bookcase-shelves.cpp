class Solution {
public:
    int n;
    int WIDTH;
    int dp[1001][1001];
    int working(vector<vector<int>>& books,int i,int remainW,int maxHeight){
        if(i>=n) return maxHeight;

        if(dp[i][remainW]!=-1) return dp[i][remainW];

        int bookW=books[i][0];
        int bookH=books[i][1];
        int keep=INT_MAX;
        int skip=INT_MAX;
        //if keep
        if(bookW<=remainW){
            keep=working(books,i+1,remainW-bookW,max(maxHeight,bookH));
        }
        //skip and put in next shelf
        skip=maxHeight+working(books,i+1,WIDTH-bookW,bookH);

        return dp[i][remainW]=min(keep,skip);
    }
    int minHeightShelves(vector<vector<int>>& books, int shelfWidth) {
        n=books.size();
        WIDTH=shelfWidth;
        int remainW=shelfWidth;
        memset(dp,-1,sizeof(dp));
        return working(books,0,remainW,0);
    }
};