class Solution {
public:

    int maxProduct(vector<int>& nums) {
       int pref=1,suff=1;
       int n=nums.size();
       int ans=INT_MIN;

       for(int i=0;i<n;i++){
        if(pref==0) pref=1;
        if(suff==0) suff=1;

        pref=pref*nums[i];
        suff=suff*nums[n-1-i];
        ans=max(ans,max(pref,suff));
        
       }
       return ans;
    }
};