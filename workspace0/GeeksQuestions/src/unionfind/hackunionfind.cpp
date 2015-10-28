/*
#include <iostream>
#include<set>
#include<vector>
using namespace std;
set<pair<int,int>> s;
int find(int parent[],int x){
	return parent[x]=(x==parent[x]?x:find(parent,parent[x]));
}

void union_Set(int parent[],int size[],int x,int y){
	x=find(parent,x);
	y=find(parent,y);
	s.erase(make_pair(size[x],x));
	s.erase(make_pair(size[y],y));
	if(size[x]<=size[y]){

		parent[x]=y;
		size[y]+=size[x];
		s.insert(make_pair(size[y],y));
	}
	else{
		parent[y]=x;
		size[x]+=size[y];
		s.insert(make_pair(size[x],x));
	}
}

int findMinDiff(){
	int diff=0;
	if(s.size()>1){
	 diff=s.begin()->first-s.end()->first;
	}
	else return 0;
	return diff;
}
int main()
{
	int N,Q;
	cin>>N>>Q;

    int parent[N+1],size[N+1];
	for(int i=1;i<=N;i++){
		parent[i]=i;
		size[i]=1;
		s.insert(make_pair(1,i));
	}
	for(int i=1;i<=Q;i++){
		cin>>a>>b;
		if(find(parent,a)!=find(parent,b)){
	 		union_Set(parent,size,a,b);
		}
		cout<<findMinDiff();
	}
    return 0;
}
*/
