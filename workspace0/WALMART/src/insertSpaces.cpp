/*
 * insertSpaces.cpp
 *
 *  Created on: Oct 14, 2015
 *      Author: user
 */
#include <iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void printSpacesBetweenString(char str[],char buff[],int index,int ind_buff,int len){
	if(index==len){
		buff[ind_buff]='\0';
		for(int i=0;i<ind_buff;i++)
		cout<<buff[i];
		cout<<endl;
		return;
	}
	buff[ind_buff]=str[index];
	printSpacesBetweenString(str,buff,index+1,ind_buff+1,len);

	buff[ind_buff]=' ';
	buff[ind_buff+1]=str[index];
	printSpacesBetweenString(str,buff,index+1,ind_buff+2,len);
}

int main(){
	char  str[]="ABC";
	int len=strlen(str);
	char buff[2*len];
	buff[0]=str[0];
	printSpacesBetweenString(str,buff,1,1,len);
}
