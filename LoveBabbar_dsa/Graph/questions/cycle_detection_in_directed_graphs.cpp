// https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626?leftPanelTab=0
/*
->cycle detections in directed graphs 

->using DFS (TC -O(n+e), SC- linear)

bool checkCycleDFS(int node, unordered_map<int,bool> &visited, unordered_map<int,bool> &dfsVisited, unordered_map<int, list<int>> &adj){
    visited[node]=true; 
    dfsVisited[node]=true;

    for(auto neighbour: adj[node]){
        if(!visited[neighbour]){
            bool cycleDetected = checkCycleDFS(neighbour,visited,dfsVisited,adj);
            if(cycleDetected){
                return true;
            }
        }
        else if(dfsVisited[neighbour]){
            return true;
        }
    }

    dfsVisited[node] = false;
    return false;
}

int detectCycleInDirectedGraph(int n, vector< pair <int, int >> &edges){
    //create adj list
    unordered_map<int,list<int>> adj;
    for(int i =0; i<edges.size();i++){
        int u = edges[i].first;
        int v = edges[i].second;


        adj[u].push_back(v);
    }

    //call dfs for all components
    unordered_map<int, bool>visited;
    unordered_map<int, bool>dfsVisited;
    for(int i =1; i<=n; i++){
        if(!visited[i]){
            bool cycleFound = checkCycleDFS(i,visited,dfsVisited,adj);
            if(cycleFound){
                return true;
            }
        }
    }
    return false;
}


->using BFS (using kahn's algo used in topological sort question) | (TC- O(n+e), SC-O(n+e)(linear))

int detectCycleInDirectedGraph(int n, vector< pair <int, int >> &edges){
    //create adj list
    unordered_map<int, list<int>> adj;
    for(int i =0; i<edges.size();i++){
        int u = edges[i].first-1;
        int v = edges[i].second-1;

        adj[u].push_back(v);

    }

    //find all indegrees
    vector<int> indegree(n);
    for(auto i:adj){
        for(auto j:i.second){
            indegree[j]++;
        }
    }

    //0 indegree walo ko push kardo
    queue<int> q;
    for(int i=0; i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    // do bfs
    int cnt=0;
    while(!q.empty()){
        int front = q.front();
        q.pop();

        // inc cnt
        cnt++;

        // neighbour indegree update
        for(auto neighbour:adj[front]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    
    if(cnt ==n){
        return false;
    }
    else{
        return true;
    }
}

*/