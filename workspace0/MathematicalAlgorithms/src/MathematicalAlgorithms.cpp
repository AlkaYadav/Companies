/*
//============================================================================
// Name        : MathematicalAlgorithms.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Efficient program to calculate e^x
//============================================================================

#include <iostream>
using namespace std;

float calculateeX(int n,float x){
	float sum=1.0;
	for(int i=n;i>0;i--){
		sum=1+(sum*x)/i;
	}
return sum;
}

int main() {
	int n=10;
	float x=1.0f;
	cout << "e^x" <<calculateeX(n,x)<<endl; // prints !!!Hello World!!!
	return 0;
}
*/
