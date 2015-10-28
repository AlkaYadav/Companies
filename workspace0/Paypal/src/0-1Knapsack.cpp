/*

 * 0-1Knapsack.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user


#include <iostream>
#include<stack>
#include<limits.h>
using namespace std;

void knapsack(int weight[],int value[],int W,int m){
	int table[W+1][m+1];
	for(int i=0;i<=W;i++){
		table[i][0]=0;
	}
	for(int i=0;i<=m;i++){
		table[0][i]=0;
	}

	for(int i=1;i<=W;i++){
		for(int j=1;j<=m;j++){
			if(i>=weight[j-1]){
				table[i][j]=max(value[j-1]+table[i-weight[j-1]][j-1],table[i][j-1]);
			}
			else{
				table[i][j]=table[i][j-1];
			}
		}
	}
	cout<<"Knapsack value "<<table[W][m]<<endl;
}

int main(){
	int val[] = {60, 100, 120};
	    int wt[] = {10, 20, 30};
	    int  W = 50;
	    int n = sizeof(val)/sizeof(val[0]);
	    knapsack(wt,val,W,n);
}
*/
