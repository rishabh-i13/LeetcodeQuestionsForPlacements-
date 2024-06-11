class Solution {
public:
    //1st and nth can not be taken at once as 
    //this is circular , they are neighbour
    
    //first calculate from 1st house to n-1th house
      //then calculate 2nd house to nth house
    int working(vector<int> &nums,int index,int n,int t[]){
        if(index>=n) return 0;
        if(t[index]!=-1) return t[index];

        int steal=nums[index]+working(nums,index+2,n,t);

        int skip=working(nums,index+1,n,t);
        return t[index]=max(steal,skip);
    }

    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==1) return nums[0];
        int t1[100];
        int t2[100];
        memset(t1,-1,sizeof(t1));
        memset(t2,-1,sizeof(t2));
        // now return the max of (1st to n-1 house)
        // and (2nd to nth house)
        return max(working(nums,0,n-1,t1),working(nums,1,n,t2));
    }
};