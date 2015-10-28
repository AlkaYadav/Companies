/*

 * prim.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: user


#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>
#define PII pair<long long,int>
using namespace std;
void prim(vector<vector<PII> > v,int source){
	priority_queue<PII,vector<PII>,greater<PII> > Q;
	Q.push(make_pair(0,source));
	bool visited[v.size()+1];
	for(int i=1;i<=v.size();i++){
		visited[i]=false;
	}
	long long sum=0;
	while(!Q.empty()){
		PII p;
		p=Q.top();
		Q.pop();
		long long wt=p.first;
		int x=p.second;
		if(visited[x]==true){
			continue;
		}
		visited[x]=true;
		sum+=wt;
		cout<<"Added "<<x<<" and weight::"<<wt<<endl;
		vector<PII>::iterator it;
		for(it=v[x].begin();it!=v[x].end();it++){
			int y=it->second;
			if(visited[y]==false){
				Q.push(*it);
			}
		}
	}
	cout<<"Sum is "<<sum<<endl;
}

int main(){
	int nodes,edges,weight,node1,node2;
	cin>>nodes>>edges;
	vector<vector<PII> > v(nodes+1);
	for(int i=0;i<edges;i++){
		cin>>weight>>node1>>node2;
		v[node1].push_back(make_pair(weight,node2));
		v[node2].push_back(make_pair(weight,node1));
	}

	prim(v,1);
}


*/
