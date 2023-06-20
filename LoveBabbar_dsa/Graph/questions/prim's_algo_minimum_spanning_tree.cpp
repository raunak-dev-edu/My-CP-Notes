// https://www.codingninjas.com/codestudio/problems/prim-s-mst_1095633?topList=love-babbar-dsa-sheet-problems&leftPanelTab=0
/*
->Minimum spanning tree (Prim's Algo)
-Spanning tree - every node reaches by another node (n node , n-1 edges)
Here minimum means minmumu cost of weight

Prim's algo-
1] first of all make array of key, mst, and parent then put source value (zero here) in first element of key array and rest all infinity, then put false in all elment of mst and put -1 in all elements of parent.
2] find minimum value and make true correspoding value in mst[u] = true and then find its adjacent.
3] here adj of 0 is 1 and 3  so first chnge the infinty value of key at 1 and 3 with the weight of edge(2 and 6 repectively here). Also, change the value of parent array at corresponding index (1 and 3 here) with the parent value(0 here).
4] now find next min having condition (mst[i] == false && key[i] <mini)
5] after finding min mark true in mst corresponding to that value.
6] find adjacent of this and chnge the infinity with the weight if there is infinity in key array and if there is already value then put the value which is samller (i.e., if new value is less than old value then update it otherwise leave ). Then, chnge the value of parent aaray at corresponding index with parent value (1 here).
7] Repeat this same. Execution will stop after getting true value in all element of mst
8] To find minimum spanning tree connect the value of parent with corresponding node and then sum the weight of all edges.

#include <bits/stdc++.h>
vector<pair<pair<int, int>, int>> calculatePrimsMST(int n, int m, vector<pair<pair<int, int>, int>> &g)
{
    // create adj list
    unordered_map<int, list<pair<int, int>>> adj;

    for (int i = 0; i < g.size(); i++)
    {
        int u = g[i].first.first;
        int v = g[i].first.second;
        int w = g[i].second;

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }

    vector<int> key(n + 1);
    vector<int> mst(n + 1);
    vector<int> parent(n + 1);

    for (int i = 0; i <= n; i++)
    {
        key[i] = INT_MAX;
        parent[i] = -1;
        mst[i] = false;
    }

    // start the algo
    key[1] = 0;
    parent[1] = -1;

    for (int i = 0; i < n; i++)
    {
        int mini = INT_MAX;
        int u;
        // find the mini wali node
        for (int v = 1; v <= n; v++)
        {
            if (mst[v] == false && key[v] < mini)
            {
                u = v;
                mini = key[v];
            }
        }

        //  mark min node as true
        mst[u] = true;

        // check its adjacent nodes
        for (auto it : adj[u])
        {
            int v = it.first;
            int w = it.second;
            if (mst[v] == false && w < key[v])
            {
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    vector<pair<pair<int,int>,int>> result;
    for(int i =2; i<=n; i++){
        result.push_back({{parent[i],i},key[i]});
    }
    return result;
}



*/