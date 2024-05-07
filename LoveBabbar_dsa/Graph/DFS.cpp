/*
DFS- Depth First Search - depth tk jata h no adjacent

question - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa2x3QWtPWDEyWmJScEx0TVFDbXhZNXdVbGpHd3xBQ3Jtc0tsQ19ncGw4TVFleTNwdmFvclpXd2swWFktU2xEMmJCMVdJZjg5c3hnYXVFQjd0XzFYaFg5VXREOEh1cnl2YUNfaUtvbUF4WFF5eGMtZjI1QzlSRnJUeko1Z1hlWk1KYXRuSGhmNkZhN3FIMWRXMERqTQ&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fdfs-traversal_630462%3FleftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=aJa3U-hydXc

void dfs (int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj, vector<int> &component){
    //ans stroe
    component.push_back(node);
    // marks visited
    visited[node] =true;

    //hr connected node k liye recurssive call
    for(auto i: adj[node]){
        if(!visited[i]){
            dfs(i,visited,adj,component);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<int>> &edges){
    //prepare adjList
    unordered_map<int, list<int>> adj;
    for(int i =0; i< edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    vector<vector<int>> ans;
    unordered_map<int, bool> visited;
    for(int i=0; i<V;i++){
        if(!visited[i]){
            vector<int>component;
            dfs(i,visited,adjList,component);
            ans.push_back(component);
        }
    }
    return ans;
}

steps-
1] preapre adj list(find u and v from edges and pushed to unordered_map<int,list<int>>)
2] in main DFS function create vector<vector<int>> ans;, unordered_map<int, bool> visited;
3] make for loop in which check not visited and then make vector<int>component and 
   called our created dfs function then push compnent to ans
4] Make our void dfs function in which first push node to compmnent and mark visited true
5] make dfs call for all not visted node in adj list.


*/