/*
 * stringConversion.cpp
 *
 *  Created on: Oct 17, 2015
 *      Author: user
 */
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

void convert(string A,string B){
	int res=0;
	int lenA=A.length();
	int lenB=B.length();
	for(int i=lenA-1;i>=0;i--){
		for(int j=lenB-1;j>=0;j--){
			if(A[i]==B[j]){
				i--;
				j--;
			}
			else{
				res++;
				j--;
			}
		}
	}

	cout<<"Result is "<<res<<endl;
}


int main(){
	string A="EBDCA";
	string B="EABCD";
	convert(A,B);
}
