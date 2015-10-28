/*
 * matrixChainMultiplication.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user
 */
#include <iostream>
#include<stack>
#include<limits.h>
using namespace std;


void matrixChain(int p[],int n){
int mat[n][n];
for(int i=1;i<n;i++){
	mat[i][i]=0;
}

for(int L=2;L<n;L++){
	for(int i=1;i<=n-L+1;i++){
		int j=i+L-1;
		mat[i][j]=INT_MAX;
		for(int k=i;k<=j-1;k++){
			mat[i][j]=min(mat[i][j],mat[i][k]+mat[k+1][j]+p[i-1]*p[k]*p[j]);
		}
	}
}

cout<<"Matrix multiplication "<<mat[1][n-1]<<endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    matrixChain(arr,size);
}
