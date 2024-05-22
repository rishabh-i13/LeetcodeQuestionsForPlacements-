class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int t=-1;
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
                t=i;
                break;
            }
        }

        if(t==-1) return "";

        return num.substr(0,t+1);
    }
};