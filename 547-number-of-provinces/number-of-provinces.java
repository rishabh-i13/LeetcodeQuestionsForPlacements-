public class Solution {
    // Private method for BFS
    private void bfs(int node, ArrayList<ArrayList<Integer>> adjList, boolean[] vis) {
        Queue<Integer> q = new LinkedList<>();
        vis[node] = true;  // Mark as visited
        q.add(node);  // Add to queue

        while (!q.isEmpty()) {
            int nd = q.poll();  // Get and remove the front element
            for (int it : adjList.get(nd)) {  // Iterate through neighbors
                if (!vis[it]) {
                    vis[it] = true;  // Mark as visited
                    q.add(it);  // Add to queue
                }
            }
        }
    }

    public int findCircleNum(int[][] isConnected) {
        int n = isConnected.length;  // Size of the matrix
        ArrayList<ArrayList<Integer>> adjList = new ArrayList<>();  // Create adjacency list

        // Initialize the adjacency list
        for (int i = 0; i < n; i++) {
            adjList.add(new ArrayList<>());  // Add a new list for each node
        }

        // Build the adjacency list from the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1 && i != j) {
                    adjList.get(i).add(j);  // Add edge
                    adjList.get(j).add(i);  // Undirected graph, so add both ways
                }
            }
        }

        boolean[] vis = new boolean[n];  // Visited array

        int count = 0;  // Count of connected components
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {  // If not visited
                count++;  // New component
                bfs(i, adjList, vis);  // Run BFS from this node
            }
        }
        return count;  // Return the number of provinces
    }
}