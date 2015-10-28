/*

 * longestPalinSubseq.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user


//Longest Palindromic Subsequence
#include <iostream>
#include<string>
#include<limits.h>
using namespace std;
int longestPalinSubseq(string str){
	int len=str.length();
	int lps[len][len];

	for(int i=0;i<len;i++){
		lps[i][i]=1;
	}
	for(int L=2;L<=len;L++){
		for(int i=0;i<=len-L;i++){
			int j=i+L-1;
			if(str[i]==str[j]){
				if(L==2){
					lps[i][j]=2;
				}
				else{
					lps[i][j]=2+lps[i+1][j-1];
				}
			}
			else{
				lps[i][j]=max(lps[i][j-1],lps[i+1][j]);
			}
		}
	}

	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			cout<<lps[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Length of LPS "<<lps[0][len-1]<<endl;
}

int main(){
	string str="GEEKS FOR GEEKS";
	longestPalinSubseq(str);
}
*/
