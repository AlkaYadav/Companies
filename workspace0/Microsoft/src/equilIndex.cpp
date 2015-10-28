/*

 * equilIndex.cpp
 *
 *  Created on: Oct 19, 2015
 *      Author: user



 * Given an array of integers, find an index such that sum of the element of left side = sum
of element of right side array of integers, find an index such that sum of the element of
left side = sum of element of right side

#include <iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

int euilIndex(int a[],int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	int left=a[0];
	for(int i=1;i<n-1;i++){
		int right=sum-left-a[i];
		if(left==right){
			return i;
		}
		left+=a[i];
	}
	return -1;
}

int main(){
	int arr[] = {-7, 1, 5, 2, -4, 3, 0};
	 int arr_size = sizeof(arr)/sizeof(arr[0]);
	 cout<<euilIndex(arr,arr_size);
}


*/
