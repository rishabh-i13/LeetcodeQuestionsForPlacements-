class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> v;
        
        sort(begin(nums1),end(nums1));
        sort(begin(nums2),end(nums2));
        int i=0,j=0;

        while(i<n1 and j<n2){
            if(nums1[i]<nums2[j]) i++;

            else if(nums1[i]>nums2[j]) j++;

            else {
                v.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return v;

    }
};