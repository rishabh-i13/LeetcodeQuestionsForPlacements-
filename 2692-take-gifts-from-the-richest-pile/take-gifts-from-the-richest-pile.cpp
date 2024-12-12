class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> mh(gifts.begin(),gifts.end());

        while(k--){
            int currmax=mh.top();
            mh.pop();
            int temp=sqrt(currmax);
            mh.push(temp);
        }

        long long int ans=0;

        while(mh.empty()==0){
            ans+=mh.top();
            mh.pop();
        }

        return ans;
    }
};