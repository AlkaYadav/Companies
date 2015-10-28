/*
//============================================================================
// Name        : Practice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct subset{
	int parent;
	int rank;
};
int find(int x,struct subset subsets[]){
	return (subsets[x].parent=(x==subsets[x].parent?x:find(subsets[x].parent,subsets)));
}

void union_Set(struct subset subsets[],int x,int y){
	int x_parent=find(x,subsets);
	int y_parent=find(y,subsets);
	if(subsets[x_parent].rank<subsets[y_parent].rank){
		subsets[x_parent].parent=y_parent;
	}
	else if(subsets[x_parent].rank>subsets[y_parent].rank){
		subsets[y_parent].parent=x_parent;
	}
	else{
		subsets[y_parent].parent=x_parent;
		subsets[x_parent].rank++;
	}
}
int main() {
	int N=3,a,b;
	struct subset subsets[N];
	for(int i=0;i<N;i++){
		subsets[i].parent=i;
		subsets[i].rank=0;
	}
	int E=3;
	for(int i=0;i<E;i++){
		cin>>a>>b;
		if(find(a,subsets)!=find(b,subsets)){
			union_Set(subsets,a,b);
		}
		else{
			cout<<"Cycle detect"<<endl;
		}
	}
	return 0;
}
*/
