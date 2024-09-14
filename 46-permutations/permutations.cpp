class Solution {
public:
    void working(vector<int>& nums,int n, vector<int>& temp,vector<vector<int>> &ans,int record[]){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++){
            if(record[i]==0){
                temp.push_back(nums[i]);
                record[i]=1;
                working(nums,n,temp,ans,record);
                record[i]=0;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=nums.size();
        int record[n];

        for(int i=0;i<n;i++) record[i]=0;

        working(nums,n,temp,ans,record);
        return ans;
    }
};