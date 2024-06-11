class Solution {
public:
    int t1[100];
    int t2[100];
    int work1(vector<int> &nums,int index,int n){
        if(index>=n) return 0;
        if(t1[index]!=-1) return t1[index];

        int steal=nums[index]+work1(nums,index+2,n);

        int skip=work1(nums,index+1,n);
        return t1[index]=max(steal,skip);
    }
    int work2(vector<int> &nums,int index,int n){
        if(index>=n) return 0;
        if(t2[index]!=-1) return t2[index];

        int steal=nums[index]+work2(nums,index+2,n);

        int skip=work2(nums,index+1,n);
        return t2[index]=max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        memset(t1,-1,sizeof(t1));
        memset(t2,-1,sizeof(t2));

        return max(work1(nums,0,n-1),work2(nums,1,n));
    }
};