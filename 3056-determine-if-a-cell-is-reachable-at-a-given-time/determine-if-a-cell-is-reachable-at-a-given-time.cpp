class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx and sy==fy and t!=1) return true;
        if(sx==fx and sy==fy and t==1) return false;
        
        int temp=max(abs(sx-fx),abs(sy-fy));
        
        if(temp<=t) return true;
        else return false;
    }
};