/*

 * fordFulkerson.cpp
 *
 *  Created on: Sep 29, 2015
 *      Author: user


#include <iostream>
#include <limits.h>
#include <string.h>
#include <queue>
using namespace std;

// Number of vertices in given graph
#define V 6

bool bfs(int graph[][V],int parent[],int src,int dest){
	bool visited[V];
	for(int i=0;i<V;i++){
		visited[i]=false;

	}
	queue<int> q;
	q.push(src);
	parent[src]=-1;
	visited[src]=true;
	while(!q.empty()){
		int top=q.front();

		q.pop();
		for(int i=0;i<V;i++){
			if(graph[top][i]>0 && !visited[i]){
				parent[i]=top;
				q.push(i);
				visited[i]=true;
				cout<<"Pushed "<<i<<endl;
				cout<<"Front is "<<q.front()<<endl;
			}
		}
	}
	cout<<"Dest "<<dest<<"visited is "<<visited[dest]<<endl;
	return (visited[dest]==true);
}
int fordFulkerson(int rGraph[][V], int src, int dest){
	int parent[V];
	int graph[V][V]; // Residual graph where rGraph[i][j] indicates
	                     // residual capacity of edge from i to j (if there
	                     // is an edge. If rGraph[i][j] is 0, then there is not)
	    for (int u = 0; u < V; u++)
	        for (int v = 0; v < V; v++)
	             graph[u][v] = rGraph[u][v];

	int maxflow=0;

	while(bfs(graph,parent,src,dest)){
		cout<<"BFS exists "<<endl;
		int flow=INT_MAX;
		for(int i=dest;i!=src;i=parent[i]){
			if(graph[parent[i]][i]<flow){
				flow=graph[parent[i]][i];
			}
		}
		cout<<"Flow is "<<flow<<endl;
		for(int i=dest;i!=src;i=parent[i]){
			graph[parent[i]][i]-=flow;
			graph[i][parent[i]]+=flow;
		}
		maxflow+=flow;
	}
	return maxflow;
}
int main()
{
    // Let us create a graph shown in the above example
    int graph[V][V] = { {0, 16, 13, 0, 0, 0},
                        {0, 0, 10, 12, 0, 0},
                        {0, 4, 0, 0, 14, 0},
                        {0, 0, 9, 0, 0, 20},
                        {0, 0, 0, 7, 0, 4},
                        {0, 0, 0, 0, 0, 0}
                      };
    cout << "The maximum possible flow is " << fordFulkerson(graph, 0, 5);

        return 0;
    }
*/