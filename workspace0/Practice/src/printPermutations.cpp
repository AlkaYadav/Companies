/*

 * printPermutations.cpp
 *
 *  Created on: Sep 28, 2015
 *      Author: user


#include <iostream>
#include<algorithm>
using namespace std;


void printPermute(string str,int start,int end){
	if(start==end){
		cout<<str<<endl;
		return;
	}
	for(int i=start;i<=end;i++){
		swap(str[i],str[start]);
		printPermute(str,start+1,end);
		swap(str[i],str[start]);
	}
}

int main() {
	string str="ABC";
	printPermute(str,0,str.length()-1);
}
*/
