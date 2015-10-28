/*

#include<iostream>
#define MOD 1000000007
using namespace std;
void multiply(unsigned long int A[][26],unsigned long int B[][26]){
	unsigned long int C[26][26];
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			unsigned long int sum=0;
			for(int k=0;k<26;k++){
				sum=(sum%MOD+((A[i][k]%MOD)*(B[k][j]%MOD)%MOD)%MOD);
			}
			C[i][j]=sum%MOD;
		}
	}

	for(int i=0;i<26;i++){
			for(int j=0;j<26;j++){
				A[i][j]=C[i][j]%MOD;
			}
	}
}

void identityMatrix(unsigned long int res[][26],int size){
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
void powerOfMatrix(unsigned long int mat[][26],int n){
	unsigned long int res[26][26];
	identityMatrix(res,26);
	while(n){
		if(n%2==0){
			n=n/2;
			multiply(mat,mat);
		}
		else{
			n--;
			multiply(res,mat);
		}
	}
}

void printMatrix(int mat[][26]){
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	unsigned long int mat[26][26];
	for(unsigned long int i=0;i<26;i++){
		for(unsigned long int j=0;j<26;j++){
			cin>>mat[i][j];
		}
	}
	unsigned long int orig[26][26];
	for(unsigned long int i=0;i<26;i++){
			for(unsigned long int j=0;j<26;j++){
				orig[i][j]=mat[i][j];

			}
	}
	unsigned long int T;
	char C;
	unsigned long int L;
	cin>>T;
	while(T--){
		cin>>C>>L;
		//cout<<"Before cal matrix is "<<endl;
			//	printMatrix(mat);
		powerOfMatrix(mat,L);

		//cout<<"After power to "<<L<<endl;
		//printMatrix(mat);
		unsigned long int index=C-'a';
		unsigned long int sum=0;
		for(int i=0;i<26;i++){
			sum=(sum%MOD+mat[index][i]%MOD)%MOD;
		}
		cout<<sum<<endl;
		for(int i=0;i<26;i++){
					for(int j=0;j<26;j++){
						mat[i][j]=orig[i][j];

					}
			}
	}
}



*/
