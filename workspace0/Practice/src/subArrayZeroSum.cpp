/*

 * subArrayZeroSum.cpp
 *
 *  Created on: Sep 29, 2015
 *      Author: user


#include <iostream>
#include<map>
#include<algorithm>
using namespace std;

int subArraySum(int arr[],int n){
	int sum=0;
	int maxSum=INT_MIN;
	map<int,int> m;
	for(int i=0;i<n;i++){
		sum+=arr[i];
		cout<<"Sum is "<<sum<<endl;
		if(m[sum]){
			if((i+1-m[sum])>maxSum){
				cout<<"For i "<<i<<" Sum "<<sum<<" and "<<m[sum]<<endl;
				maxSum=i-m[sum]+1;
				cout<<"Maxsum "<<maxSum<<endl;
			}
		}
		else{
			m[sum]=i+1;
		}
	}
	return maxSum;
}

int main()
{
	int arr[]={15, -2, 2, -8, 1, 7, 10, 23};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Max subarray "<<subArraySum(arr,n)<<endl;
}


*/
