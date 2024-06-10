class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v2(heights);
        sort(v2.begin(),v2.end());
        int count=0,i=0;

        for(int &x:heights){
            if(x!=v2[i]) count++;
            i++;
        }

        return count;
    }
};