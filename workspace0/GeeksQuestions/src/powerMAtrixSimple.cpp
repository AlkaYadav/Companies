/*

 * powerMAtrixSimple.cpp
 *
 *  Created on: Oct 6, 2015
 *      Author: user


#include<iostream>
using namespace std;
void printMatrix(int mat[][2],int size);
void identityMatrix(int res[][2],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(i==j){
				res[i][j]=1;
			}
			else{
				res[i][j]=0;
			}
		}
	}
}

void multiply(int A[][2],int B[][2]){
	int C[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			int sum=0;
			for(int k=0;k<2;k++){
				sum+=A[i][k]*B[k][j];
			}
			C[i][j]=sum;
			sum=0;
		}
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			A[i][j]=C[i][j];
		}
	}
}

void printMatrix(int mat[][2],int size){
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}

void power(int mat[][2],int n){
	int res[2][2];
	identityMatrix(res,2);
	cout<<"Identity matrix is "<<endl;
	printMatrix(res,2);
	while(n){
		if(n%2==0){
			multiply(mat,mat);
			cout<<"Even multiple "<<endl;
			printMatrix(mat,2);
			n=n/2;
		}
		else{


			multiply(res,mat);
			n--;
		}

		cout<<"Res matrix "<<endl;
		printMatrix(res,2);
	}

	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			mat[i][j]=res[i][j];
		}
	}
	cout<<"Final matrix"<<endl;
	printMatrix(mat,2);
	cout<<"Finished"<<endl;
}

void powerExponent(int a,int b){
	int res=1;
	while(b){
		if(b%2==0){
			a=a*a;
			b=b/2;
		}
		else{
			res=res*a;
			b--;
		}
	}
	cout<<"REsult is "<<res<<endl;
}

int main(){
	int mat[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			cin>>mat[i][j];
		}
	}
	power(mat,3);

	//powerExponent(4,3);
}


*/
