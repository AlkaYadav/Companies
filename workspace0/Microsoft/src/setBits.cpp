/*

 * setBits.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: user


//Given a number, return the number of set bits of the number if binary representation
//of the number is a palindrome, else return 1.

#include <iostream>
#include<stdlib.h>
using namespace std;

bool kthBitSet(int num,int k){
	if(num&(1<<k)){
		return true;
	}
	return false;
}
int setBits(unsigned num){
	unsigned tmp=num;
	int cnt=0;
	while(tmp){
		cnt++;
		tmp=tmp/2;
	}
	int l=0,bits=0;
	bool flag=true;
	int r=cnt-1;
	cout<<" r is "<<r<<endl;
	while(l<r){
		if(kthBitSet(num,l)==kthBitSet(num,r)){
			l++;
			r--;
			bits++;
		}
		else{
			flag=false;
			break;
		}
	}
	if(flag){
		return bits;
	}
	else{
		return -1;
	}
}

int main(){
	unsigned int num=37;
	cout<<"Bits "<<setBits(num)<<endl;
}
*/
