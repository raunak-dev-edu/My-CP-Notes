// https://www.codingninjas.com/codestudio/problems/count-strongly-connected-components-kosaraju-s-algorithm_1171151?leftPanelTab=0
/*
-> Count strongly connected (means each node which when act as starting point, it should be able to go through each node).

1]kosaraju algo - sort all nodes basis on thier finishing time (read it in topological sort)
2]transpose the graph (change edge directon)
3]apply dfs to count

#include <bits/stdc++.h>
void dfs(int node, unordered_map<int,bool> &vis, stack<int> &st, unordered_map<int, list<int>> &adj){
    vis[node] =true;
    for(auto nbr: adj[node]){
        if(!vis[nbr]){
            dfs(nbr,vis,st,adj);
        }
    }
    //topo logic
    st.push(node);
}
void revDfs(int node, unordered_map<int,bool> &vis, unordered_map<int, list<int>> &adj){
    vis[node]=true;

    for(auto nbr: adj[node]){
        if(!vis[nbr]){
            revDfs(nbr,vis,adj);
        }
    }
}
int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
{
	//adj list
    unordered_map<int, list<int>> adj;

    for(int i =0;i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];
        adj[u].push_back(v);
    }

    //topo sort
    stack<int> st;
    unordered_map<int, bool>vis;
    for(int i =0; i<v;i++){
        if(!vis[i]){
            dfs(i,vis,st,adj);
        }
    }

    // create a transpose graph
    unordered_map<int, list<int>> transpose;
    for(int i =0; i<v;i++){
        vis[i] =0;
        for(auto nbr:adj[i]){
            transpose[nbr].push_back(i);
        }
    }

    //dfs call suing above ordering
    int count =0;
    while(!st.empty()){
        int top = st.top();
        st.pop();
        if(!vis[top]){
            count++;
            revDfs(top,vis,transpose);
        }
    }
    return count;
}

TC - O(n+e)
SC - linear


*/