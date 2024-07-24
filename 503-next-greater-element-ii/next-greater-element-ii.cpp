class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nums2;
        nums2.insert(nums2.end(),nums.begin(),nums.end());
        nums2.insert(nums2.end(),nums.begin(),nums.end());
        int n=nums.size();
        vector<int> v(n,-1);
        stack<int> st;
        int n2s=nums2.size();

        for(int i=n2s-1;i>=0;i--){
            while(st.empty()==0 and st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) v[i%n]=-1;
            else v[i%n]=st.top();

            st.push(nums2[i]);
        }

        return v;
    }
};