class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();
        int i=0,j=minutes;
        int whereNotgrumpy=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) whereNotgrumpy+=customers[i];
        }

        int currUnsat=0;
        for(int k=i;k<j;k++){
            currUnsat+=customers[k]*grumpy[k];
        }
        int grumpyMax=currUnsat;
        while(j<n){
            currUnsat+=customers[j]*grumpy[j];
            currUnsat-=customers[i]*grumpy[i];
            grumpyMax=max(grumpyMax,currUnsat);
            i++;
            j++;
        }
        return whereNotgrumpy+grumpyMax;
    }
};