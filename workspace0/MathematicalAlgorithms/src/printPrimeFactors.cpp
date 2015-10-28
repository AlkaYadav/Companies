/*

 * printPrimeFactors.cpp
 *
 *  Created on: Oct 1, 2015
 *      Author: user

//Efficient program to print all prime factors of a given number

#include<map>
#include<math.h>
#include <iostream>
using namespace std;

void printPrimeFactor(int n){
	map<int,int> m;
	int num=n;
	while(num%2==0){
		m[2]++;
		num=num/2;
	}
	for(int i=3;i<sqrt(n);i+=2){
		while(num%i==0){
			m[i]++;
			num=num/i;
		}
	}

	map<int,int>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}

int main(){
	int n=315;
	printPrimeFactor(n);
}


*/