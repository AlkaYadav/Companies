//============================================================================
// Name        : Citrix.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Find the number of connected 1s in matrix

#include <iostream>
#define ROW 50
#define COL 50
using namespace std;

bool isValid(int mat[ROW][COL],bool visited[ROW][COL],int check_row,int check_col,int row,int col){
	if(check_row<0 || check_row>=row || mat[check_row][check_col]==0||visited[check_row][check_col]||check_col<0 || check_col>=col){
		return false;
	}
	return true;
}
void DFSUtil(int mat[ROW][COL],bool visited[ROW][COL],int curr_row,int curr_col,int row,int col){
	int r[]={-1,-1,-1,0,0,1,1,1};
	int c[]={-1,0,1,-1,1,-1,0,1};
	int check_row,check_col;
	for(int i=0;i<8;i++){
		check_row=curr_row+r[i];
		check_col=curr_col+c[i];
		if(isValid(mat,visited,check_row,check_col,row,col)){
			visited[check_row][check_col]=true;
			DFSUtil(mat,visited,check_row,check_col,row,col);
		}
	}
}
int connectedComponent(int mat[ROW][COL],int row,int col){
	bool visited[ROW][COL];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			visited[i][j]=false;
		}
	}
	int cnt=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(mat[i][j]&&visited[i][j]==false){
				DFSUtil(mat,visited,i,j,row,col);
				cnt++;
			}
		}
	}

	cout<<"Connected component is "<<cnt<<endl;
	return cnt;
}
int main() {
	int mat[ROW][COL]={  {1, 1, 0, 0, 0},
	        {0, 1, 0, 0, 1},
	        {1, 0, 0, 1, 1},
	        {0, 0, 0, 0, 0},
	        {1, 0, 1, 0, 1}
	    };
	int row=5,col=5;
	connectedComponent(mat,row,col);
	return 0;
}
