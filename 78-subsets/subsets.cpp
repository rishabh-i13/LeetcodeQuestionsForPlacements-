class Solution {
public:

        void workingfunc(int index,int N,vector<int> temp,vector<int> &    nums,                set<vector<int>> &ansset){
        if(index==N){
            sort(temp.begin(),temp.end());
            ansset.insert(temp);
            return;
        }
        //TWO CASES:Picking and Not Picking
        //Picking element at index
        temp.push_back(nums[index]);
        workingfunc(index+1,N,temp,nums,ansset);

        //NOT picking element at index
        temp.pop_back();
        workingfunc(index+1,N,temp,nums,ansset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        set<vector<int>> ansset;
        vector<int> temp;
        int N=nums.size();
        workingfunc(0,N,temp,nums,ansset);
        vector<vector<int>> result;
        for(auto it = ansset.begin(); it != ansset.end(); it++) {
            result.push_back( * it);
        }
        return result;
    }
};