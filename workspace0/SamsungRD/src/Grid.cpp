/*

  You are given an mxn grid , where (0,0) refers top most left position and (m1,
n1)
the bottom
most right. The grid is filled with ones. All positions in the grid that are blocked are filled with
zeros. You are given this grid and are assured that there exists at least one path from (0,0) to
(m1,
n1).
Find the minimum distance of the path from (0,0) to (m1,
n1)
given that you are
allowed to move only vertically, horizontally and diagonally.

//https://www.hackerearth.com/notes/dynamic-programming-problems-involving-grids/

#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;
#define m 100
#define n 100

int minCost(int cost[m][n],int row,int col){
	int table[row][col];
	table[0][0]=cost[0][0];
	for(int i=1;i<col;i++){
		table[0][i]=cost[0][i]+table[0][i-1];
	}

	for(int i=1;i<row;i++){
			table[i][0]=cost[i][0]+table[i-1][0];
	}

	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			table[i][j]=cost[i][j]+min(table[i-1][j],min(table[i][j-1],table[i-1][j-1]));
		}
	}

	cout<<"Min cost "<<table[row-1][col-1];
	return table[row-1][col-1];
}

//Finding the number of ways to reach from a starting position to an ending
//position travelling in specified directions only.
int numberOfWays(int cost[m][n],int row,int col){
	int table[row][col];
		table[0][0]=1;
		for(int i=1;i<col;i++){
			table[0][i]=1;
		}

		for(int i=1;i<row;i++){
				table[i][0]=1;
		}

		for(int i=1;i<row;i++){
			for(int j=1;j<col;j++){
				table[i][j]=table[i-1][j]+table[i][j-1];
			}
		}
		cout<<"No of ways "<<table[row-1][col-1];
		return table[row-1][col-1];
}
int main(){
	int row,col;
	int cost[m][n];
	cin>>row>>col;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>cost[i][j];
		}
	}
	int mincost=minCost(cost,row,col);
	numberOfWays(cost,row,col);
}





*/
