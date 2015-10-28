/*

 * longestPalinSubstring.cpp
 *
 *  Created on: Oct 20, 2015
 *      Author: user


#include <iostream>
#include<string>
#include<limits.h>
using namespace std;

int lpsSubstr(string str){
	int len=str.length();
	bool lps[len][len];
	int max_len=1,startIndx;
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			lps[i][j]=false;
		}
	}
	for(int i=0;i<len;i++){
		lps[i][i]=true;
	}

	for(int L=2;L<=len;L++){
		for(int i=0;i<=len-L;i++){
			int j=i+L-1;
			if(str[i]==str[j]){
				if(L==2){
					lps[i][j]=true;
				}
				else{
					lps[i][j]=lps[i+1][j-1];
				}
			}
			if(lps[i][j]==true){
				if(max_len<L){
					max_len=L;
					startIndx=i;
				}
			}
		}
	}

	cout<<"Maximum len is "<<max_len<<"start "<<startIndx<<endl;
	string res=str.substr(startIndx,max_len);
	cout<<"Result "<<res<<endl;
}


int main()
{
   string str = "forgeeksskeegfor";
   lpsSubstr(str);
}
*/
