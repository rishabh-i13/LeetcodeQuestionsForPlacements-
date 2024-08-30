class NumArray {
public:
    vector<int> vec={0};
    NumArray(vector<int>& nums) {
        int sum=0;
        for(int x:nums){
            sum+=x;
            vec.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int sum=vec[right+1]-vec[left];
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */