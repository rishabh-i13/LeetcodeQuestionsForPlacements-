class Solution {
public:
    void bs(vector<int> v,int start,int end,int target,int &index){

        while(start<=end){
            int mid=(start+end)/2;
            if(v[mid]==target){
                index=mid;
                break;
            }
            else if(v[mid]<target){
                start=mid+1;
            }
            else end=mid-1;
        }
    }
    int search(vector<int>& nums, int target) {
        int index=-1;
        bs(nums,0,nums.size()-1,target,index);
        return index;
    }
};