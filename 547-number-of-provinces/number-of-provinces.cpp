class Solution {
    //using bfs , done using dfs on gfg 
    private :
    void bfs(int node,vector<vector<int>> &adjList,vector<int> &vis){
        queue<int> q;
        vis[node]=1;
        q.push(node);

        while(!q.empty()){
            int nd=q.front();
            q.pop();

            for(int it:adjList[nd]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> adjList(n);// creating adj list

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 and i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }
        vector<int> vis(n, 0);

        int count=0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                count++;
                bfs(i,adjList,vis);
            }
        }
        return count;
    }
};