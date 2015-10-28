/*

 * test.cpp
 *
 *  Created on: Sep 27, 2015
 *      Author: user

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int gcd(int a,int b){
	if(a==0||a==b){
		return b;
	}
	if(b==0){
		return a;
	}
	if(!a>>2 && !(b>>2)){
		return gcd(a>>2,b>>2)<<1;
	}
	if(!a>>2 && (b>>2)){
			return gcd(a>>2,b);
		}

	if(a>>2 && !(b>>2)){
			return gcd(a,b>>2);
		}
	return a>b?gcd(a-b,b):gcd(b-a,a);
}
int main(){
	int a  = 60;
	   int b =  40;
	   cout<<gcd(b,a)<<endl;
}


*/
