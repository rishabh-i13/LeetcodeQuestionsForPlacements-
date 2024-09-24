class Solution {
public:

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> unst;
        for(int it:arr1){
            while(it>0){
                unst.insert(it);
                it/=10;
            }
        }
        int maxi=0;
        for(int it:arr2){
            while(it>0){
            
                if(unst.find(it)!=unst.end()){
                    int t=log10(it)+1;
                    maxi=max(maxi,t);
                    break;
                }
                it/=10;
            }
        }
        return maxi;
    }
};