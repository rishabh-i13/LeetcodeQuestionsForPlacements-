class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int answer=0;
        int count1=nums1.size();
        int count2=nums2.size();

        if(count2%2==0){
            answer=0;
        }
        else{
            for(int i=0;i<count1;i++){
                answer=answer^nums1[i];
            }
        }
        if(count1%2==0){
            answer=answer^0;
        }
        else{
            for(int i=0;i<count2;i++){
                answer=answer^nums2[i];
            }
        }
        return answer;
    }
};