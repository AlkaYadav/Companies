/*

 * shortestCommonSubseq.cpp
 *
 *  Created on: Sep 28, 2015
 *      Author: user


#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void shortestCommonSuperSeq(string str1,string str2){
	int len1=str1.length();
	int len2=str2.length();
	int LCS[len1+1][len2+1];
	bool isCommon1[len1];
	bool isCommon2[len2];
	for(int i=0;i<len1;i++){
		isCommon1[i]=false;
	}
	for(int i=0;i<len2;i++){
			isCommon2[i]=false;
		}
	for(int i=0;i<=len1;i++){
		for(int j=0;j<=len2;j++){
			LCS[i][j]=0;
		}
	}
	for(int i=1;i<=len1;i++){
			for(int j=1;j<=len2;j++){
				if(str1[i-1]==str2[j-1]){
					LCS[i][j]=1+LCS[i-1][j-1];
					isCommon1[i-1]=true;
					isCommon2[j-1]=true;
				}
				else{
					LCS[i][j]=max(LCS[i-1][j],LCS[i][j-1]);
				}
			}
    }

	char strFinal[len1+len2];
	int indx=0;
	for(int i=0;i<len1;i++){
		strFinal[indx++]=str1[i];
	}
	for(int i=0;i<len2;i++){
		if(!isCommon2[i]){

		strFinal[indx++]=str2[i];
		}
	}
	strFinal[indx]='\0';
	cout<<strFinal;
}


int main(){
	string str1 = "AGGTAB",  str2 = "GXTXAYB";
	shortestCommonSuperSeq(str1,str2);
}

*/
