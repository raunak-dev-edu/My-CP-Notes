// https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqa3A1SW81a2phR3lQM2JIQml2aW8yQ1Y5RXlId3xBQ3Jtc0tucmo4VTZBNTFyZThqM2JDa1UzbDVPYlNaM1dfUm9Udy1nbkpzeFZ1YjhqUmFoZlIxQThQcEhWVXhEMUJVUG1IOUpHN2pQYTg3N2pXU2NUZGZlRUhBUzNGVlIwa05yS3ZISGxZVXY5eUc0TDVkNzZNQQ&q=https%3A%2F%2Fwww.codingninjas.com%2Fcodestudio%2Fproblems%2Fcreate-a-graph-and-print-it_1214551%3FtopList%3Dlove-babbar-dsa-sheet-problems%26leftPanelTab%3D0%26utm_source%3Dyoutube%26utm_medium%3Daffiliate%26utm_campaign%3DLovebabbar&v=EaK6aslcC5g
/*
->Graph Implementation

vector<vector<int>> printAdjacency(int n, int m, vector<vector<int>> &edges){
    vector<int> ans[n];
    for(int i=0; i<m; i++){
        int u = edges[i][0];
        int v = edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }

    vector<vector<int>> adj(n);
    for(int i =0; i<n; i++){
        adj[i].push_back(i);

        for(int j=0; j<ans[i].size(); j++){
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;
}

TODO - find TC and SC


*/