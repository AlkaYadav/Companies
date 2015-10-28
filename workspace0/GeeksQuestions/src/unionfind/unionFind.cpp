/*

 * unionFind.cpp
 *
 *  Created on: Oct 9, 2015
 *      Author: user

#include <iostream>
#include<set>
#include<vector>
using namespace std;

int find(int parent[],int x){
	return parent[x]=(x==parent[x]?x:find(parent,parent[x]));
}

void union_Set(int parent[],int size[],int x,int y){
	x=find(parent,x);
	y=find(parent,y);
	if(size[x]<=size[y]){
		parent[x]=y;
		size[y]+=size[x];
	}
	else{
		parent[y]=x;
		size[x]+=size[y];
	}
}

void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n=5,a,b;
	int parent[n],size[n];
	for(int i=1;i<=n;i++){
		parent[i]=i;
		size[i]=1;
	}
	for(int i=1;i<=4;i++){
		cin>>a>>b;
		if(find(parent,a)==find(parent,b)){
			cout<<"Cycle detected"<<endl;
		}
		else{
			union_Set(parent,size,a,b);
		}
	}

	printArray(parent,5);
	printArray(size,5);

}
*/
