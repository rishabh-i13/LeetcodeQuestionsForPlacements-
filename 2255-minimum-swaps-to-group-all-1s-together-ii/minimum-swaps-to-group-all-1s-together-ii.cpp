class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int> v;
        v.insert(v.end(),nums.begin(),nums.end());
        v.insert(v.end(),nums.begin(),nums.end());

        int count1=0;
        for(int i:nums){
            if(i==1) count1++;
        }
        if(count1==0 or count1==1) return 0;
        int i=0,j=0;
        int curr1=0;
        int max1=INT_MIN;
        while(i<nums.size()){
            if(v[j]==1){
                curr1+=v[j];
            }
            if(j-i+1>count1){
               curr1-=v[i];
               i++;
            }
            j++;
            max1=max(max1,curr1);
        }
        return count1-max1;
    }
};