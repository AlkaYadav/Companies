/*
//============================================================================
// Name        : Paypal.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stack>
#include<limits.h>
using namespace std;

void lisCalc(int a[],int n){
	int lis[n];
	stack<int> s;
	int parent[n];
	for(int i=0;i<n;i++){
		lis[i]=1;
		parent[i]=-1;
	}
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i] && 1+lis[j]>lis[i]){
				parent[i]=j;
				lis[i]=1+lis[j];
			}
		}
	}
	int max_lis=INT_MIN,max_index;
	for(int i=0;i<n;i++){
		if(lis[i]>max_lis){
			max_lis=lis[i];
			max_index=i;
		}
	}
	cout<<"Length of maxlis is "<<max_lis<<endl;

	cout<<"Maxindex "<<max_index<<endl;

	while(max_index!=-1){
		s.push(a[max_index]);
		max_index=parent[max_index];
	}

while(!s.empty()){
	cout<<s.top()<<" ";
	s.pop();
}

}
int main() {
	int a[]={10, 22, 9, 33, 21, 50, 41, 60, 80};
	int n=sizeof(a)/sizeof(a[0]);
	lisCalc(a,n);
	return 0;
}
*/
