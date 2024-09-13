class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> arrxor;
        int n=arr.size();
        int m=queries.size();
        arrxor.push_back(arr[0]);

        for(int i=1;i<n;i++){
            int temp=arrxor[i-1]^arr[i];
            arrxor.push_back(temp);
        }

        for(int i=0;i<m;i++){
            int L=queries[i][0];
            int R=queries[i][1];

            int val=arrxor[R]^(L==0? 0: arrxor[L-1]);

            ans.push_back(val);
        }

        return ans;
    }
};