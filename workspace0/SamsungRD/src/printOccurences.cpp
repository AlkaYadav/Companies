/*

//============================================================================
// Name        : SamsungRD.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

 * a string, print the number of occurrences of 1[0]*1 where * denotes zero or more
occurrences of the digit 0. [5 points]
Input: 10011abc10000001
Output: 3

#include <iostream>
using namespace std;

int main() {
	string str;
	cin>>str;
	int cnt=0;
	for(int i=0;i<str.length();i++){
		if(str[i]=='1'){
			i++;
			while(str[i]!='1' && i<str.length()){
				i++;
			}
			cnt++;
		}
	}
	cout<<"Count "<<cnt<<endl;
	return 0;
}

*/