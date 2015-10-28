/*

 * longestRepeatingSubseq.cpp
 *
 *  Created on: Sep 28, 2015
 *      Author: user


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


int longestRepeatingSubseq(string str){
	int len=str.length();
	int LCS[len+1][len+1];

	for(int i=0;i<=len;i++){
		for(int j=0;j<=len;j++){
			LCS[i][j]=0;
			//LCS[i][0]=0;
		}
		}
	for(int i=1;i<=len;i++){
		for(int j=1;j<=len;j++){
			if(str[i-1]==str[j-1] && i!=j){
				LCS[i][j]=1+LCS[i-1][j-1];
			}
			else{
				LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
			}
		}
	}

	cout<<LCS[len][len]<<endl;
}


int main(){
	string str="axx";
	longestRepeatingSubseq(str);
}
*/
