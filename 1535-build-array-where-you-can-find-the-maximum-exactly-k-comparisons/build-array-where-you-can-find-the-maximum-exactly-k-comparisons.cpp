class Solution {
public:
    int N,M,K;
    long long int Mod=1e9+7;
    int dp[101][101][101];
    int working(int index,int searchCost,int maxSofar){
        if(index==N){
            if(searchCost==K) return 1;
            else return 0;
        }
        if(maxSofar!=-1 and dp[index][searchCost][maxSofar]!=-1) return dp[index][searchCost][maxSofar];
        int result=0;
        for(int i=1;i<=M;i++){
            if(i>maxSofar){
                result=(result+working(index+1,searchCost+1,i))%Mod;
            }
            else result=(result+working(index+1,searchCost,maxSofar))%Mod;
        }
        if(maxSofar!=-1) return dp[index][searchCost][maxSofar]=result%Mod;

        return result%Mod;
    }
    int numOfArrays(int n, int m, int k) {
        N=n;
        M=m;
        K=k;
        memset(dp,-1,sizeof(dp));
        return working(0,0,-1);
    }
};