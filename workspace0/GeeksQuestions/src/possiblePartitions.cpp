/*

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;


bool isPalindrome(string str,int start,int end){
	int len=(end-start+1);
	for(int i=start;i<=(start+len-1)/2;i++){
		if(str[i]!=str[i+len-1])
			return false;
	}

	while(start<=end){
		if(str[start]!=str[end]){
			return false;
		}
		start++;
		end--;
	}
	return true;
}

void printString(string str,int start,int end){
	for(int i=start;i<=end;i++){
		cout<<str[i];
	}
	cout<<endl;
}
void printAllPossiblePartitions(string str){
	int len=str.length();
	int L;
	for(L=1;L<=len;L++){
		for(int i=0;i<=len-L;i++){
			int j=i+L-1;
			if(isPalindrome(str,i,j)){
				printString(str,i,j);
			}
		}
	}
}

int main(){
	string str1 = "GEEKS";
	printAllPossiblePartitions(str1);
}
*/
