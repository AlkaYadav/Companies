/*

 * bitonic.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: user


#include <iostream>
#include<vector>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

void bitonic(int a[],int len){
	int lis[len];
	//First find lis
	for(int i=0;i<len;i++){
		lis[i]=1;
	}
	for(int i=1;i<len;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j]<a[i] && 1+lis[j]>lis[i]){
				lis[i]=1+lis[j];
			}
		}
	}

	//find longest decreasing sequence
	int lds[len];
	for(int i=0;i<len;i++){
			lds[i]=1;
	}

	for(int i=len-2;i>=0;i--){
		for(int j=i+1;j<len;j++){
			if(a[j]<a[i] && 1+lds[j]>lds[i]){
				lds[i]=1+lds[j];
			}
		}
	}
	int max_bitonic=0;
	for(int i=0;i<len;i++){
		if(lis[i]+lds[i]-1>max_bitonic){
			max_bitonic=lis[i]+lds[i]-1;
		}
	}

	cout<<"Maximum bitonic subsequence "<<max_bitonic<<endl;
}

int main(){
	int a[]= {80, 60, 30, 40, 20, 10};
	int size=sizeof(a)/sizeof(a[0]);
	bitonic(a,size);
}
*/
