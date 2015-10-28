/*

 * minJumps.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user

#include <iostream>
#include<string>
#include<limits.h>
using namespace std;

void findMinJumps(int arr[],int n){
	int jumps[n];
	jumps[0]=0;
	for(int i=1;i<n;i++){
		jumps[i]=INT_MAX;
		for(int j=0;j<i;j++){
			if(i<=j+arr[j] && jumps[j]!=INT_MAX){
				jumps[i]=min(jumps[i],1+jumps[j]);
				break;
			}
		}
	}

	cout<<"Min jumps "<<jumps[n-1]<<endl;
}

int main(){
	int arr[] = {1, 3, 6, 1, 0, 9};
	    int size = sizeof(arr)/sizeof(int);
	    findMinJumps(arr,size);
}
*/
