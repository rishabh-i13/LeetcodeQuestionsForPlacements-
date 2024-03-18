//pepcoding me jo btaya tha wahi karne ja rha hu bs thoda dusri tarah  se
//usme wrt 2nd elemt sort kiya h then algo lagaya h upr se niche
// mai first k wrt sort krne reverse kr dunga aur v[i][0] pe hi operation use krunga
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        sort(points.begin(),points.end());
        reverse(points.begin(),points.end());
        int start=points[0][0];
        for(int i=1;i<points.size();i++){
            if(points[i][1]>=start) continue;
            else{
                start=points[i][0];
                count++;
            }
        }
        return count;
    }
};