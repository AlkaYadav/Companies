/*

 * test.cpp
 *
 *  Created on: Oct 18, 2015
 *      Author: user


#include<sstream>
#include<iostream>
using namespace std;
int main(){
	int num=-123;
	ostringstream convert;
	string s;
	convert<<num;
	s=convert.str();
cout<<s<<endl;



//String to number
string Text = "456"; // string containing the number

int Result;          //number which will contain the result

istringstream convert(Text); // stringstream used for the conversion constructed with the contents of 'Text'
                             // ie: the stream will start containing the characters of 'Text'

if ( !(convert >> Result) ) //give the value to 'Result' using the characters in the stream
    Result = 0;             //if that fails set 'Result' to 0

//'Result' now equal to 456
}


*/
