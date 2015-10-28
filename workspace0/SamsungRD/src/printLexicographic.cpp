/*
 * printLexicographic.cpp
 *
 *  Created on: Oct 19, 2015
 *      Author: user
 */
//Print lexicographic order permutations

#include <iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

int findNextHigher(string str,int index,char b){
	int ceil=index+1;
	for(int i=index+1;i<str.length();i++){
		if(str[i]>b && str[i]<str[ceil]){
			ceil=i;
		}
	}
	return ceil;
}
void swap(string& str,int a,int b){
	char c=str[a];
	str[a]=str[b];
	str[b]=c;
}
void printLexicographic(string str){
	while(true){
		cout<<str<<endl;
		int i;
		for( i=str.length()-2;i>=0;i--){
			if(str[i]<str[i+1]){
				break;
			}
		}
		if(i==-1){
			break;
		}
		int index=findNextHigher(str,i,str[i]);

		swap(str,index,i);

		sort(str.begin()+i+1,str.end());
	}
}

int main(){
	string str="ABC";
	printLexicographic(str);
}


