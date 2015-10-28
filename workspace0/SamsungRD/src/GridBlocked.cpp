/*

 * GridBlocked.cpp
 *
 *  Created on: Oct 18, 2015
 *      Author: user




 * Finding the number of ways to reach a particular position in a grid from a starting position
 *  (given some cells which are blocked)


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

int numberOfWaysBlockedCells(int cost[m][n],int row,int col){
	//blocked cells have a special entry -1
	for(int i=0;i<col;i++){
		if(cost[0][i]==-1){
			break;
		}
		cost[0][i]=1;
	}

	for(int i=0;i<row;i++){
			if(cost[i][0]==-1){
				break;
			}
			cost[i][0]=1;
	}
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			if(cost[i][j]==-1)
				continue;
			if(cost[i-1][j]>0)
			cost[i][j]=cost[i-1][j];
			if(cost[i][j-1]>0)
			cost[i][j]+=cost[i][j-1];
           cout<<"For "<<i<<" for "<<j<<" cost "<<cost[i][j]<<endl;
		}
	}
	cout<<"Cost matrix"<<endl;
	for(int i=0;i<row;i++){
			for(int j=0;j<col;j++){
				cout<<cost[i][j]<<" ";
			}
			cout<<endl;
	}
	cout<<"Cost to reach "<<cost[row-1][col-1];
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
	numberOfWaysBlockedCells(cost,row,col);
}
*/
