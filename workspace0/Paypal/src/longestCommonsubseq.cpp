/*

 * longestCommonsubseq.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user

#include <iostream>
#include<string>
#include<stack>
#include<limits.h>
using namespace std;

int lcs(string X,string Y){
	int len1=X.length();
	int len2=Y.length();
	stack<char> s;
	int table[len1+1][len2+1];
	for(int i=0;i<=len1;i++){
		table[i][0]=0;

	}
	for(int i=0;i<=len2;i++){
			table[0][i]=0;

		}
	for(int i=1;i<=len1;i++){
		for(int j=1;j<=len2;j++){
			if(X[i-1]==Y[j-1]){
				table[i][j]=1+table[i-1][j-1];
			}
			else{
				table[i][j]=max(table[i][j-1],table[i-1][j]);
			}
		}
	}

	cout<<"Longest Commn "<<table[len1][len2]<<endl;

	cout<<"Printing LCS "<<endl;
	int i=len1,j=len2;
	while(i!=0 && j!=0){
		if(X[i-1]==Y[j-1]){
			s.push(X[i-1]);
			i--;
			j--;
		}
		else{
			if(table[i][j-1]>table[i-1][j]){
				j--;
			}
			else{
				i--;
			}
		}
	}

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}

int main(){
	string A="ABCDGH";
	string B="AEDFHR";
	lcs(A,B);
}
*/
