class Solution {
public:
    // int t[101];
    // int working(vector<int>&nums,int index,int n){
    //     if(index>=n) return 0;

    //     if(t[index]!=-1) return t[index];

    //     int steal=nums[index]+working(nums,index+2,n);

    //     int skip=working(nums,index+1,n);
    //     return t[index]=max(steal,skip);
    // }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // memset(t,-1,sizeof(t));
        // return working(nums,0,n);
        vector<int> money(n+1);
        money[0]=0;
        money[1]=nums[0];
        for(int i=2;i<=n;i++){
            //if steal;
            int steal=nums[i-1]+money[i-2];

            //if skip
            int skip=money[i-1];

            money[i]=max(steal,skip);
        }
        return money[n];
    }
};