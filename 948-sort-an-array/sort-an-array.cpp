class Solution {
public:
    //WRITING TH CODE OF MERGE SORT
    void merge(vector<int>& nums,int low,int mid, int high){
        vector<int> temp;
        int left=low,right=mid+1;

        while(left<=mid and right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }else{
                temp.push_back(nums[right]);
                right++;
            }
        }
        while(left<=mid) temp.push_back(nums[left++]);
        while(right<=high) temp.push_back(nums[right++]);

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }

    }
    void mergeSort(vector<int>& nums,int low,int high){
        if(low>=high) return;
        int mid=low + (high - low) / 2;

        mergeSort(nums,low,mid); // for left part
        mergeSort(nums,mid+1,high); // for right

        merge(nums,low,mid,high); // merging left and right halfs
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};