// https://www.codingninjas.com/codestudio/problems/bridges-in-graph_893026?leftPanelTab=0
/*
->Bridges in Graph
->Bridges are the edges when removed no.of components increased(makes the graph disconnected).

steps-
1] make 4 arrays of disc(discovery time),low,parent,vis(visited).assign -1 to all in disc,low,parent and false in vis.And variable timer set to 0 which will increase as we move to next node.
2] start with src(here 0). Upadte 1st element of of disc,low with 0 and chnge to true in vis.
3] now go to next node update the disc, low with same and parent with parent of node and chnge to true in vis
4] now if node goes to already visited node then it is a case of back edge. we will handle it by early time using low[node]= min (low[node],disc[neighbour])
5] while returning use low[node] = min(low[node],low[child])
6] to check bridge use (low[neighbour]>dic[node])


#include <bits/stdc++.h>

void dfs(int node, int parent, int &timer, vector<int> &disc, vector<int> &low, vector<vector<int>> &result, unordered_map<int,list<int>> &adj,unordered_map<int, bool> &vis){
    vis[node] =true;
    disc[node] = low[node] =timer++;

    for(auto nbr:adj[node]){
        if(nbr == parent){
            continue;
        }
        if(!vis[nbr]){
            dfs(nbr,node, timer,disc,low,result,adj,vis);
            low[node] =min(low[node],low[nbr]);
            //check edge is bridge
            if(low[nbr] > disc[node]){
                vector<int > ans;
                ans.push_back(node);
                ans.push_back(nbr);
                result.push_back(ans);
            }

        }
        else{
            //back edge
            low[node] =min(low[node],disc[nbr]);
        }
    }
}
vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
    //adj list
    unordered_map<int, list<int>>adj;

    for(int i =0; i<edges.size(); i++){
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int timer =0;
    vector<int> disc(v);
    vector<int> low(v);

    int parent =-1;
    unordered_map<int, bool> vis;

    for(int i =0; i<v; i++){
        disc[i]=-1;
        low[i] = -1;

    }
    vector<vector<int>> result;
    //dfs
    for(int i=0; i<v; i++){
        if(!vis[i]){
            dfs(i, parent, timer, disc, low, result, adj,vis);
        }
    }
    return result;
}

TC -O(n+e)
SC - O(n)
 
*/