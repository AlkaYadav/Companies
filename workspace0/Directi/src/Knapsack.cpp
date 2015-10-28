//============================================================================
// Name        : Directi.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void knapsack(int wt[],int val[],int n,int W){
	int table[n+1][W+1];

	for(int i=0;i<=n;i++){
		table[i][0]=0;
	}
	for(int i=0;i<=W;i++){
			table[0][i]=0;
	}

	for(int i=1;i<=n;i++){
		for(int j=1;j<=W;j++){
			if(wt[i-1]<=j){
				table[i][j]=max(val[i-1]+table[i-1][j-wt[i-1]],table[i-1][j]);
			}
			else{
				table[i][j]=table[i-1][j];
			}
		}
	}

	cout<<"Table entries ..."<<endl;
	for(int i=1;i<=n;i++){
			for(int j=1;j<=W;j++){
				cout<<table[i][j]<<" ";
			}
			cout<<endl;
	}
	cout<<"Maximum value "<<table[n][W]<<endl;
}
int main() {
	int val[] = {60, 100, 120};
	int wt[] = {10, 20, 30};
	int  W = 50;
	int n = sizeof(val)/sizeof(val[0]);
	knapsack(wt, val, n,W);
	return 0;
}
