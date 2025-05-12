class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> mp1(10,0);
        for(int d:digits){
            mp1[d]++;
        }

        vector<int> ans;

        for(int i=100;i<999;i+=2){
            vector<int> mp2(10,0);
            int temp=i;

            while(temp){
                mp2[temp%10]++;
                temp=temp/10;
            }
            bool isAble=true;
            for(int j=0;j<10;j++){
                if(mp2[j]>mp1[j]) {
                    isAble=false;
                    break;
                }
            }
            if(isAble) ans.push_back(i);
        }
        return ans;
    }
};