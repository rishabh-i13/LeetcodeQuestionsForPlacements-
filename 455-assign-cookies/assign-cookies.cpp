class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0,j=0;
        int sg=g.size();
        int ss=s.size();
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        int count=0;
        while(i<sg and j<ss){
            if(g[i]<=s[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};