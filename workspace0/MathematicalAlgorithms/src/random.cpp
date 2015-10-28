/*
 * randomGenerator.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: user
 */
//Random number generator in arbitrary probability distribution fashion

#include <stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<iostream>
using namespace std;

int findCeil(int random,int pre[],int start,int end){
	if(start>end){
		return -1;
	}
	if(pre[start]>=random){
		return start;
	}
	int mid=(start+end)/2;
	if(pre[mid]==random){
		return mid;
	}
	if(pre[mid]<random){
		return findCeil(random,pre,mid+1,end);
	}
	return findCeil(random,pre,start,mid-1);
}
void random(int arr[],int freq[],int n){
	int pre[n];
	pre[0]=freq[0];
	for(int i=1;i<n;i++){
		pre[i]=freq[i]+pre[i-1];

	}
	int random=rand()%pre[n-1]+1;
	cout<<"Random is "<<random<<endl;
	int ceilIndx=findCeil(random,pre,0,n-1);
	cout<<"Ceil indx is "<<ceilIndx<<endl;
	cout<<arr[ceilIndx]<<endl;
}

int main(){
	int arr[]  = {1, 2, 3, 4};
	    int freq[] = {10, 5, 20, 100};
	    int n = sizeof(arr) / sizeof(arr[0]);
	    srand(time(NULL));
	    random(arr,freq,n);
}

