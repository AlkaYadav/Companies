/*

 * maxMST.cpp
 *
 *  Created on: Oct 12, 2015
 *      Author: user


#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

long long find(long long parent[],long long x){
	return parent[x]=(x==parent[x]?x:find(parent,parent[x]));
}

void union_Set(long long  parent[],long long  size[],long long  x,long long  y){
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

void kruskal(vector<pair<long long,pair<long long,long long> > > v,long long nodes){
	long long sum=0;
	long long parent[nodes+1],size[nodes+1];
	for(long long i=1;i<=nodes;i++){
		parent[i]=i;
		size[i]=1;
	}
	for(int i=0;i<v.size();i++){
		long long wt=v[i].first;
		long long x=v[i].second.first;
		long long y=v[i].second.second;
		if(find(parent,x)!=find(parent,y)){
			sum=sum-wt;
			union_set(parent,size,x,y);
		}
	}
	cout<<sum<<endl;
}
int main()
{
	int T;
    cin>>T;
    while(T--){
    	long long wt;
    	long long node1,node2;
    	vector<pair<long long,pair<long long,long long> > > v;
    	cin>>N>>M;
    	for(int i=0;i<M;i++){
    		cin>>node1>>node2>>wt;
    		v.push_back(-wt,make_pair(node1,node2));
    	}
    	sort(v.begin(),v.end());
    	kruskal(v,N)
    }
    return 0;
}



*/
