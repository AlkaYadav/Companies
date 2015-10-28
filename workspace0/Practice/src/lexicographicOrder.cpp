/*

 * lexicographicOrder.cpp
 *
 *  Created on: Sep 28, 2015
 *      Author: user

#include <iostream>
#include<algorithm>
using namespace std;

int findRightMostSmall(string str){
	int len=str.length();
	int i;
	for( i=len-2;i>=0;i--){
		if(str[i]<str[i+1]){
			break;
		}
	}
	return i;
}

int findCeil(char a,string str,int start){
	int len=str.length();
	int ceilIndx=start+1;
	for(int i=start+1;i<len;i++){
		if(str[i]>a && str[i]<str[ceilIndx]){
			ceilIndx=i;
		}
	}
	return ceilIndx;
}
void reverse(string& str,int l,int h){
	while(l<=h){
		swap(str[l],str[h]);
		l++;
		h--;
	}
}
void printLexicographic(string str){

	sort(str.begin(),str.end());

	while(true){
		cout<<str<<endl;
		int indx=findRightMostSmall(str);
		//cout<<"Indx is "<<indx<<endl;
		if(indx<0){
			break;
		}
		int ceilIndx=findCeil(str[indx],str,indx);
		swap(str[ceilIndx],str[indx]);
		//cout<<"Now string is after swap "<<str<<endl;
		reverse(str,indx+1,str.length()-1);


		//sort(str.begin()+indx+1,str.end());
	}
}

int fact(int len){
	if(len<=0){
		return 1;
	}
	return len*fact(len-1);
}
int findSmallCharsRight(string str,int indx){
	int count=0;
	for(int i=indx+1;i<str.length();i++){
		if(str[i]<str[indx]){
			count++;
		}
	}
	return count;
}
int lexicoRank(string str){
	int len=str.length();
	int rank=1;
	int mul=fact(len);
	for(int i=0;i<len;i++){
		int chars=findSmallCharsRight(str,i);
		mul/=len-i;
		rank+=mul*chars;
	}
	return rank;
}
int main() {
	string str="string";

	//printLexicographic(str);
	cout<<"Rank "<<lexicoRank(str);
}
*/
