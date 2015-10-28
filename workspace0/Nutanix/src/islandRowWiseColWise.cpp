/*
 * islandRowWiseColWise.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: user
 */


//Count number of islands where every island is row-wise and column-wise separated
#define ROW 100
#define COL 100

void DFSUtil(char a[ROW][COL],int visited[ROW][COL],int i,int j,int rows,int cols){
	int xv[]={-1,1};
	int yv[]={0,0};
	int xh[]={0,0};
	int yh[]={-1,1};
	int next_x;
}
void islandRowWiseColWise(char a[ROW][COL],int rows,int cols){
	int visited[ROW][COL];
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			visited[i][j]=false;
		}
	}

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(visited[i][j]==false && a[i][j]=='X'){
				DFSUtil(a,visited,i,j,rows,cols);
			}
		}
	}
}

