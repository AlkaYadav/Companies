/*
 * integerendingwith3.cpp
 *
 *  Created on: Oct 26, 2015
 *      Author: user
 */

//4.	Every integer ending with 3 has at least one multiple which is made of only 1s. Ex. 3 has 111, 13 has 111111. Given integer n(LSD is 3),
//return its smallest such multiple

#include<stack>
#include <iostream>
#include<stdlib.h>
using namespace std;

int integerEndingWith3(int num){
	int tmp=num;
	int digit=0;
	while(tmp){
		digit++;
		tmp=tmp/10;
	}
tmp=0;

	for(int i=0;i<digit;i++){
		tmp=tmp*10+1;
	}
	while(true){
		if(tmp%num==0){
			break;
		}
		tmp=tmp*10+1;

	}
	cout<<"Number is "<<tmp<<endl;
	return tmp;
}

int main(){
	int num=3;
	integerEndingWith3(num);
}