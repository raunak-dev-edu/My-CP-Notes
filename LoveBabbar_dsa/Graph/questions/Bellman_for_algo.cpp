// https://www.codingninjas.com/codestudio/problems/bellmon-ford_2041977?leftPanelTab=0
/*
->Bellman ford algo - (shortest path)
-can't be apply in negative weight circle
-can apply on directed graph which have -ve weights

1] apply n-1 times this 
(if(dist[u]+wt < dist[v]){
    dist[v]=dist[u]+wt})
2] 1 more time - same formula to check -ve cycle present or not (if dist update then it's present we can't determine shortest path)


#include <bits/stdc++.h> 
int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    vector<int> dist(n+1,1e9);
    dist[src] =0;

    for(int i =1; i<=n; i++){
        //traverse on edge list
        for(int j =0; j<m; j++){
            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];
            
            if(dist[u]!= 1e9 && ((dist[u] + wt) < dist [v])){
                dist[v] = dist[u] +wt;
            }
        }
    }

    //check or negative cycle
    bool flag =0;
    for(int j =0; j<m; j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];
        
        if(dist[u]!= 1e9 && ((dist[u] + wt) < dist [v])){
            flag =1;
        }
    }    
    if(flag == 0){
        return dist[dest];
    }
    return -1;
}

TC - O(n*m)

*/