/*
 * testCompare.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: user
 */



#include<algorithm>
#include<stdlib.h>
#include<vector>
#include<iostream>
using namespace std;

int compare(const void* a,const void*  b){
	return *(int*)a-*(int*)b;
}
int main(){
	int a[]={1,5,2,7,3,2};
	vector<int> v(a,a+6);
	//sort(a,a+6,compare);
	qsort(&v[0],6,sizeof(int),compare);

	for(int i=0;i<6;i++){
			cout<<v[i]<<" ";
	}
	/*make_heap(v.begin(),v.end(),compare);
	for(int i=0;i<6;i++){
		cout<<v[0]<<" ";
		pop_heap(v.begin(),v.end(),compare);
		v.pop_back();
	}*/
	return 0;
}
