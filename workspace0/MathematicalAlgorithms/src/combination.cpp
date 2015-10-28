/*

 * combination.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: user



#include<iostream>
using namespace std;

void combination(int arr[],int data[],int index,int n,int r,int start,int end){
	if(index==r){
		for(int i=0;i<r;i++){
			cout<<data[i]<<" ";
		}
		cout<<endl;
		return;
	}
	for(int i=start;i<=end;i++){
		data[index]=arr[i];
		combination(arr,data,index+1,n,r,i+1,end);
		while(arr[i]==arr[i+1]){i++;

		}
	}

}

void printCombination(int arr[],int data[],int index,int n,int r,int start,int end){
	if(index==r){
		for(int i=0;i<r;i++){
					cout<<data[i]<<" ";
				}
				cout<<endl;
				return;
	}
	if(start>=n){
		return;
	}
	data[index]=arr[start];
	printCombination(arr,data,index+1,n,r,start+1,end);
	while(arr[start]==arr[start+1]){
		start++;

			}
	printCombination(arr,data,index,n,r,start+1,end);
}
int main(){
	int arr[] = {1, 1,2,2,3,4,4,5};
	    int r = 2;
	    int n = sizeof(arr)/sizeof(arr[0]);
	    int data[r];
	    combination(arr, data,0,n, r,0,n-1);
}
*/
