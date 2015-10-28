/*

 * minCoins.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user



//Find minimum number of coins that make a given value
#include <iostream>
#include<stack>
#include<limits.h>
using namespace std;

int findMin(int coins[],int m,int V){
	int table[V+1][m+1];
	for(int i=1;i<=V;i++){
			for(int j=1;j<=m;j++){
				table[i][j]=INT_MAX;
			}
			}
	for(int i=0;i<=V;i++){
		table[i][0]=INT_MAX;
	}
	for(int i=0;i<=m;i++){
			table[0][i]=0;
	}
	for(int i=1;i<=V;i++){
		for(int j=1;j<=m;j++){
			if(i>=coins[j-1] && table[i-coins[j-1]][j]!=INT_MAX){
				table[i][j]=min(1+table[i-coins[j-1]][j],table[i][j-1]);
			}
			else{
				table[i][j]=table[i][j-1];
			}
		}
	}

	cout<<"Minimum coins... "<<table[V][m]<<endl;

	for(int i=0;i<=V;i++){
			for(int j=0;j<=m;j++){
				if(table[i][j]==INT_MAX){
					cout<<"IF"<<" ";
				}
				else
				cout<<table[i][j]<<" ";
			}
			cout<<endl;
		}

	return 0;
}

int noOfWays(int coins[],int m,int V){
	int table[V+1][m+1];
	for(int i=0;i<=V;i++){
		table[i][0]=0;
	}
	for(int i=0;i<=m;i++){
		table[0][i]=1;
	}

	for(int i=1;i<=V;i++){
		for(int j=1;j<=m;j++){
			if(i>=coins[j-1]){
				table[i][j]=table[i-coins[j-1]][j]+table[i][j-1];
			}
			else{
				table[i][j]=table[i][j-1];
			}
		}
	}

	cout<<"Ways "<<table[V][m]<<endl;
}
int main()
{
    int arr[] = {2, 5, 3, 6};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = 10;
    findMin(arr,m,n);
    noOfWays(arr,m,n);
}
*/
