/*
 * multiplyBigNos.cpp
 *
 *  Created on: Oct 22, 2015
 *      Author: user
 */

#include <iostream>
#include<vector>
#include<climits>
#include<string>
#include<cstring>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

void multiplyBigNos(string a,string b){
	int lenA=a.length();
	int lenB=b.length();
	int c[lenA+lenB];
	for(int i=0;i<lenA+lenB;i++){
			c[i]=0;
		}
	for(int i=lenA-1;i>=0;i--){
		for(int j=lenB-1;j>=0;j--){
			c[i+j+1]+=(a[i]-'0')*(b[j]-'0');
		}
	}
	int carry=0;
	for(int i=lenA+lenB-1;i>=0;i--){
		if(c[i]>10){
			c[i-1]+=c[i]/10;
			c[i]=c[i]%10;
		}
	}

	for(int i=0;i<lenA+lenB;i++){
		cout<<c[i]<<" ";
	}
}

int main(){
	string a="125";
	string b="39";

	char sbc[]="3421";
	string s(sbc);
	cout<<s<<endl;

	string dfs="abdcf";
	 char v[45];
	strcpy(v,dfs.c_str());
	cout<<"Length "<<strlen(v)<<endl;
	//v=dfs.c_str();
	cout<<v<<endl;
	multiplyBigNos(a,b);
}

