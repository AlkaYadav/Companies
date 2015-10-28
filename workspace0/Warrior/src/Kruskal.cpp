/*
//============================================================================
// Name        : Warrior.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int find(int parent[],int x){
	return parent[x]=(x==parent[x]?x:find(parent,parent[x]));
}

void union_Set(int parent[],int size[],int x,int y){
	x=find(parent,x);
	y=find(parent,y);
	if(x!=y){
		if(size[x]<=size[y]){
			parent[x]=y;
			size[y]++;
		}
		else{
			parent[y]=x;
			size[x]++;
		}
	}
}
void kruskal(vector<pair<int,pair<int,int> > > v,int nodes){
	int parent[nodes+1],size[nodes+1];
	int sum=0;
	for(int i=1;i<=nodes;i++){
		parent[i]=i;
		size[i]=1;
	}
	for(int i=0;i<v.size();i++){
		int x=v[i].second.first;
		int y=v[i].second.second;
		int wt=v[i].first;

		if(find(parent,x)!=find(parent,y)){
			union_Set(parent,size,x,y);
			cout<<"Including "<<x<<" and "<<y<<endl;
			sum+=wt;
		}
	}
	cout<<"MST sum "<<sum<<endl;
}
int main() {
	int nodes,edges,weight,node1,node2;
	cin>>nodes>>edges;
	vector<pair<int,pair<int,int> > > v;
	for(int i=0;i<edges;i++){
		cin>>weight>>node1>>node2;
		v.push_back(make_pair(weight,make_pair(node1,node2)));
	}
	sort(v.begin(),v.end());
	kruskal(v,nodes);
	return 0;
}
*/
