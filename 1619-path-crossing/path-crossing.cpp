class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        set<pair<int,int>> s;
        s.insert({0,0});
        int size=path.size();
        for(int i=0;i<size;i++){
            if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else if(path[i]=='W'){
                x--;
            }

            if(s.find({x,y})!=s.end()){
                return true;
            }
            else {
                s.insert({x,y});
            }
        }
        return false;
    }
};