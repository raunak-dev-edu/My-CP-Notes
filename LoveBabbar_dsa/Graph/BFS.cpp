/*
BFS- Breadth first search - traversal technique fo graph

question - https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbmF4RGkxblRBQ29lOC12ejNxOXBOenBNWEZPUXxBQ3Jtc0trNEs5MlVwU2h3SzNKSjFFa0gtMnJmMHdDWVFtZjNTUHRkS3kxYlpKYVhaLWtaZjZsZEZMV1NIc3R2dWZJay1BS1FZN2JxeDM2THIwZWxBZGlsbFlobC14SGR0b3FUM0pZWlAtN21Qeks0NC1tOEo5RQ&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fbfs-in-graph_973002%3FtopList%3Dlove-babbar-dsa-sheet-problems%26leftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=b5kij1Akf9I

void prepareAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int,int>> &edges){
    for(int i =0; i<edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);
    }
}
void bfs(unordered_map<int,set<int>> &adjList,unordered_map<int, bool> &visited, vector<int> &ans, int node){
    
    queue<int> q;
    q.push(node);
    visited[node]=1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        //store frontNode into ans;
        ans.push_back(frontNode);

        //traverse all neighbours of frontnode
        fro(auto i: adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges){
    unordered_map<int,set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);

    //traverse all components of a graph
    for(int i =0; i<vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
}

TC and SC - O(n+e) | n=no of node, e = no of edges

*/