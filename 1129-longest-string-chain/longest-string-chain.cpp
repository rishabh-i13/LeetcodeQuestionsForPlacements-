class Solution {
public:
    int n;
    int dp[1001][1001];
    bool isPredecessor(string word1,string word2){
        int i=0,j=0;
        while(i<word1.size() and j<word2.size()){
            if(word1[i]==word2[j]){
                i++;
                j++;
            }
            if(word1[i]!=word2[j]){
                j++;
            }
        }
        if(j-i==1) return true;

        return false;
    }
    static bool myComparator(string word1,string word2){
        return word1.length() < word2.length();
    }
    int working(vector<string>& words,int index,int prev){
        if(index>=n) return 0;

        if(prev!=-1 and dp[index][prev]!=-1) return dp[index][prev];

        int take=0;
        if(prev==-1 or (words[index].size()-words[prev].size()==1 and isPredecessor(words[prev],words[index]))){
            take=1+working(words,index+1,index);
        }

        int skip=working(words,index+1,prev);
        if(prev!=-1) return dp[index][prev]=max(take,skip);
        return max(take,skip);
    }
    int longestStrChain(vector<string>& words) {
        n=words.size();
        memset(dp,-1,sizeof(dp));
        sort(begin(words),end(words),myComparator);
        return working(words,0,-1);
    }
};