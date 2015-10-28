/*

 * GridWorkingOut.cpp
 *
 *  Created on: Oct 18, 2015
 *      Author: user


 * Problem Statement : You are given a 2-D matrix A of n rows and m columns
 * where A[i][j] denotes the calories burnt. Two persons, a boy and a girl,
 * start from two corners of this matrix. The boy starts from cell (1,1) and
 *  needs to reach cell (n,m). On the other hand, the girl starts from cell (n,1)
 *  and needs to reach (1,m). The boy can move right and down. The girl can move
 *  right and up. As they visit a cell, the amount in the cell A[i][j] is added to
 *  their total of calories burnt. You have to maximize the sum of total calories
 *  burnt by both of them under the condition that they shall meet only in one cell
 *  and the cost of this cell
 *  shall not be included in either of their total.

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

int numberOfWaysWorkout(int cost[m][n],int row,int col){
	int Boys1[row][col];
	int Boys2[row][col];
	int Girls1[row][col];
	int Girls2[row][col];
	//Boy goes from  0,0 to  i,j
	Boys1[0][0]=cost[0][0];
	for(int i=1;i<col;i++){
		Boys1[0][i]=cost[0][i]+Boys1[0][i-1];
	}

	for(int i=1;i<row;i++){
			Boys1[i][0]=cost[i][0]+Boys1[i-1][0];
		}
	for(int i=1;i<row;i++){
		for(int j=1;j<col;j++){
			Boys1[i][j]=cost[i][j]+max(Boys1[i-1][j],Boys1[i][j-1]);
		}
	}

	//boy1 goes from i,j to m,n
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
	numberOfWaysWorkout(cost,row,col);
}
*/
