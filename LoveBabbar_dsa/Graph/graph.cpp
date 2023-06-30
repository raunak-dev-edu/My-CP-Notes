/*
->Graph - a type of data structure containing nodes and edges (nodes-entity to store data and edges -connecting nodes)
->Undirected - edges point to both direction
    -Degree - no of edges connected to a node.
->Directed - edges point to one direction
    -Indegree - no of edges coming to a node
    -outdegree - no of edges going out of a node
cyclic graph - if graph have path which can travelled back to same postion then it is cyclic
Adjacency matrix - we make a matrix and put the value 1 if there is edges at matrix[i][j] otherwise 0 where i,j are nodes.
Adjacency list - we write down all connection of nodes in a list

*/

#include <bits/stdc++.h>
using namespace std;

class graph {
    public:
    unordered_map<int, list<int>> adj;

    void addEdge(int u, int v, bool direction){
        //direction = 0 -> unidirected
        // direction = 1 -> directed graph 

        //create an edge from u to v
        adj[u].push_back(v);
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto i:adj){
            cout<< i.first <<"->";
            for(auto j: i.second){
                cout<<j <<", ";
            }
            cout<< endl;
        }
    }
};

int main(){

    int n;
    cout<<"Enter the number of nodes" <<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>> m;

    graph g;

    for(int i =0;i<m;i++){
        int u,v;
        cin>>u>>v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }

    //printing graph
    g.printAdjList();
    
    return 0;
}