//============================================================================
// Name        : eBay.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

// Given the sequence 3, 4, 33, 34, 43, 44, 333, 334, 343, ... and a number 'n',
//print the nth number in this sequence

#include <iostream>
using namespace std;

int sequence(int n){
	int a=3,b=4,c=0,d=0;
	int cnt=2;
	while(cnt<n){
		int prev_a=a;
		int prev_b=b;

		a=prev_a*10+3;
		cnt++;
		if(cnt==n){
			cout<<a<<endl;
			break;
		}

		b=prev_a*10+4;
		cnt++;
		if(cnt==n){
					cout<<b<<endl;
					break;
				}

		c=prev_b*10+3;
		cnt++;
		if(cnt==n){
					cout<<c<<endl;
					break;
				}

		d=prev_b*10+4;
		cnt++;
		if(cnt==n){
					cout<<d<<endl;
					break;
				}


	}
	return 0;
}
int main() {

	int num[]={1,4,8,12,16};
	int *p=num;

	int* q=num+2;
	int i=*p++;

	cout<<*p<<" "<<*q<<endl;


	cout << sequence(6) << endl; // prints !!!Hello World!!!
	return 0;
}
