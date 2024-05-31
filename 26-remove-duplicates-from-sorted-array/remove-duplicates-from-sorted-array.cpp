class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int k=s.size();
        vector<int> vc(s.begin(),s.end());
        sort(vc.begin(),vc.end());
        for(int i=0;i<vc.size();i++){
            nums[i]=vc[i];
        }
        return k;
    }
};