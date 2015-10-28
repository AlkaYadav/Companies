/*

 * connectedIslands.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user


#define ROW 100
#define COL 100
#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

bool isSafe(int next_x,int next_y,int a[ROW][COL],bool visited[ROW][COL],int rows,int cols){
	if(next_x<0 || next_x>=rows||visited[next_x][next_y] ||next_y<0 || next_y>=cols ){
		return false;
	}
	return true;
}
void DFSUtil(int a[ROW][COL],bool visited[ROW][COL],int i,int j,int rows,int cols){

	int x[]={-1,-1,-1,0,1,0,1,1,1};
	int y[]={-1,0,1,-1,1,1,-1,0,1};
	for(int ch=0;ch<8;ch++){
		int next_x=i+x[ch];
		int next_y=i+y[ch];
		if(isSafe(next_x,next_y,a,visited,rows,cols)){
			visited[next_x][next_y]=true;
			DFSUtil(a,visited,next_x,next_y,rows,cols);
		}
	}
}
void connectedIslands(int a[ROW][COL],int m,int n){
bool visited[ROW][COL];
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		visited[i][j]=false;
	}
}

int cnt=0;

for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		if(visited[i][j]==false && a[i][j]==1){
			cout<<"For i "<<i<<" and "<<j<<endl;
			cnt++;
			DFSUtil(a,visited,i,j,m,n);
		}
	}
}
cout<<"Count is "<<cnt<<endl;
}

int main(){
	int rows=5;
	int cols=5;
	int a[ROW][COL]= {  {1, 1, 0, 0, 0},
						{0, 1, 0, 0, 1},
						{1, 0, 0, 1, 1},
						{0, 0, 0, 0, 0},
						{1, 0, 1, 0, 1}
	    };
	connectedIslands(a,rows,cols);

}
*/