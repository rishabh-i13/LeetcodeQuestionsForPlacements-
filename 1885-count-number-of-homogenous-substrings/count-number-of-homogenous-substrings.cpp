class Solution {
public:
    long long M=1e9+7;
    int countHomogenous(string s) {
        int ans=0;
        int ct=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                ct++;
            }
            else{
                long long int temp=(((ct%M)*(ct+1)%M)%M)/2;
                ans+=temp;
                ct=1;
            }
        }
        long long int x=(((ct%M)*(ct+1)%M)%M)/2;
        ans+=x;
        return ans;
    }
};