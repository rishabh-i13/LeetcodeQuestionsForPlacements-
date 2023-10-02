class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int > ans;
        int n=digits.size();
        int flag=1;
        for(int i=n-1;i>=0;i--){
            int temp=digits[i];
            if(flag==1){
                temp=temp+1;
                if(temp>9){
                    flag=1;
                    temp=temp%10;
                }
                else flag=0;
            }
            ans.push_back(temp);
        }
        if(flag==1) ans.push_back(flag);

        reverse(ans.begin(),ans.end());
        return ans;
    }
};