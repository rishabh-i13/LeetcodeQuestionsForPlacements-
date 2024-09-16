class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        int n=tp.size();
        vector<int> v(n);
        int diff=INT_MAX;

        for(int i=0;i<n;i++){
            string s1=tp[i];

            int hr=(s1[0]-'0')*10+(s1[1]-'0');
            int min=(s1[3]-'0')*10+(s1[4]-'0');

            int totalmin=hr*60+min;
            v[i]=totalmin;
        }
        sort(begin(v),end(v));
        for(int i=0;i<n-1;i++){
            int d1=v[i+1]-v[i];
            int d2=1440-(v[i+1]-v[i]);

            int currdiff=min(d1,d2);
            diff=min(diff,currdiff);
        }
        diff=min(diff,1440-(v[n-1]-v[0]));
        return diff;
    }
};