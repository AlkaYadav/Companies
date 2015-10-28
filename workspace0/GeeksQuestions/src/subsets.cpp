/*

 * subsets.cpp
 *
 *  Created on: Oct 4, 2015
 *      Author: user


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;

void printSubsets(int arr[],int n){
	int max_sub=pow(2,n);
	for(int i=0 ;i<max_sub;i++){
		int tmp=i;
		int index=0;
		while(tmp){
			int x=tmp&1;
			if(x){
				cout<<arr[index]<<" ";
			}
			index++;
			tmp=tmp>>1;
		}
		cout<<endl;
	}
}

int main(){
	int arr[]={1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	printSubsets(arr,n);
}


*/
