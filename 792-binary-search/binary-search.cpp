class Solution {
public:
    int bs(vector<int> v,int start,int end,int target){

        while(start<=end){
            int mid=(start+end)/2;
            if(v[mid]==target){
               return mid;
            }
            else if(v[mid]<target){
                start=mid+1;
            }
            else if(v[mid]>target)end=mid-1;
           
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        // int index=-1;
        int index=bs(nums,0,nums.size()-1,target);
        return index;
    }
};