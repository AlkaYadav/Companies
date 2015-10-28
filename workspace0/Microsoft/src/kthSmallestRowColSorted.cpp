/*

 * kthSmallestRowColSorted.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: user


//kth smallest element in a row wise and column wise sorted 2d arrays

#include <iostream>
#include<vector>
#include<climits>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
#define ROW 100
#define COL 100
using namespace std;
int compare(pair<int,pair<int,int> > p1,pair<int,pair<int,int> > p2){
	return p1.first>p2.first;
}
int kThSmallestRowColSorted(int arr[ROW][COL],int rows,int cols,int k){
	//Create of heap having element,<index i,index j>
	vector<pair<int,pair<int,int> > > v;
	for(int i=0;i<cols;i++){
		v.push_back(make_pair(arr[0][i],make_pair(0,i)));
	}

	pair<int,pair<int,int> > ele;
	make_heap(v.begin(),v.end(),compare);
	cout<<v[0].first<<" "<<v[1].first<<" "<<v[2].first<<" "<<endl;
	for(int i=0;i<k;i++){
		ele=v[0];
		pop_heap(v.begin(),v.end(),compare);
		v.pop_back();

		int row_num=ele.second.first+1;
		int col_num=ele.second.second;
		if(row_num<rows){
			//cout<<"Now pushig "<<row_num<<" and "<<col_num<<" "<<arr[row_num][col_num]<<endl;
			v.push_back(make_pair(arr[row_num][col_num],make_pair(row_num,col_num)));
			push_heap(v.begin(),v.end(),compare);

		}

	}

	cout<<k<<"th smallest "<<ele.first<<endl;
	return ele.first;
}


int main(){
	int rows=4;
	int cols=4;

	int mat[ROW][COL] = { {10, 20, 30, 40},
	                    {15, 25, 35, 45},
	                    {25, 29, 37, 48},
	                    {32, 33, 39, 50},
	                  };
	kThSmallestRowColSorted(mat,rows,cols,3);
}
*/
