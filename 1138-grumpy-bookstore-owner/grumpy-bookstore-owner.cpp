class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n=customers.size();

        int i=0,j=minutes-1;

        int whereNotgrumpy=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0) whereNotgrumpy+=customers[i];
        }

        int grumpyMax=INT_MIN;

        while(j<n){
            int currGrumpy=0;
            for(int k=i;k<=j;k++){
                if(grumpy[k]==1) currGrumpy+=customers[k];
            }
            grumpyMax=max(grumpyMax,currGrumpy);
            i++;
            j++;
        }

        return whereNotgrumpy+grumpyMax;
    }
};