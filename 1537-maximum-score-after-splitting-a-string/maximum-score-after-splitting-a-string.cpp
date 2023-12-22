class Solution {
public:
    int maxScore(string s) {
        int i=1;
        int sz=s.size();
        int times=sz-1;
        string left="";
        string right="";
        int maxscore=INT_MIN;

        while(times){
            left=s.substr(0,i);
            right=s.substr(i,sz-i);
            times--;
            i++;
            int zero=0,ones=0;
            for(int i=0;i<left.size();i++){
                if(left[i]=='0') zero++;
            }
            for(int i=0;i<right.size();i++){
                if(right[i]=='1') ones++;
            }

            maxscore=max(maxscore,zero+ones);
        }
        return maxscore;
    }
};