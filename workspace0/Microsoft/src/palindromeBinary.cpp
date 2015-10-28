/*

 * palindromeBinary.cpp
 *
 *  Created on: Oct 19, 2015
 *      Author: user
/*
 * Given a number, return the number of set bits of the number if binary representation
of the number is a palindrome, else return 1

#include <iostream>
#include<string>
#include<climits>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;
bool isKthBitSet(unsigned int num,unsigned int k){
	return (num&(1 << (k-1)))?true:false;
}
void setBits(unsigned int num){

	int l=1,r=sizeof(unsigned int)*8;
	while(l<r){
		if(isKthBitSet(num,l)== isKthBitSet(num,r)){
			l++;
			r--;
		}
		else{
			cout<<"Not palindrome"<<endl;
			break;
		}
	}
	cout<<"is palin"<<endl;
}

bool isPalindrome(unsigned int x)
{
    int l = 1; // Initialize left position
    int r = sizeof(unsigned int)*8; // initialize right position

    // One by one compare bits
    while (l < r)
    {
        if (isKthBitSet(x, l) != isKthBitSet(x, r))
            return false;
        l++;     r--;
    }
    return true;
}

int main(){
	unsigned int x = 165;
	x = 1<<31 + 1;
	setBits(x);
}
*/
