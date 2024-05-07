/*
BFS- Breadth first search - traversal technique of graph - adjacent node traverse karega

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
        for(auto i: adjList[frontNode]){
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

steps-

1] first create unordered_map<int,set<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited; in main function of bfs
    then preapre adj list (find u and v and then make unordered_map pushing u and v in map)
2] then make bfs function 
3] make a queue then push node(starting node for traversal) in q
4] make visited node unordered_map having all 0 initial and then while pushing node to q mark visited[node]=1
5] now make a while loop(!q.empty), pop frontnode and push to ans
5] now traverser through neighbour of frontnode in adjlist[frontnode] map, check if node is visited or not, if not then push it to q and mark visted 1
6] now in main function of BFS run for loop till vertex in which chcked not visited and call our created bfs function

*/
