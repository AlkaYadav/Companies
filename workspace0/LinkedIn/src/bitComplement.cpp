/*
//============================================================================
// Name        : LinkedIn.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void bitWiseComplement(int num){
	int bits=0;
	int tmp=num;
	while(tmp){
		tmp=tmp/2;
		bits++;
	}

	for(int i=0;i<bits;i++){
		num=num^(1<<i);
	}
	cout<<"Num is "<<num<<endl;
}
int main() {
	unsigned int num;
	cin>>num;
	bitWiseComplement(num);
	return 0;
}
*/
