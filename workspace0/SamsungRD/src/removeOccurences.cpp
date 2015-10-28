/*

 * removeOccurences.cpp
 *
 *  Created on: Oct 17, 2015
 *      Author: user



  Given a string s1 remove all occurrences of the string s2 in string s1 and also remove all
occurrences of string s2 after removal of s2 in s1 and so on.. and return the string obtained
after such removals. [5 points]
Example: s1 = "qwewerrty" ; s2 = "wer "
Output: qty


#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

void removeAllOccurences(string s1,string s2){
	while(s1.find(s2)!=-1){
		int index=s1.find(s2);
		string substr1=s1.substr(0,index);
		string substr2=s1.substr(index+s2.length());
		s1=substr1+substr2;
	}
	cout<<"Now s1 is "<<s1<<endl;
}

int main(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	removeAllOccurences(s1,s2);
}
*/
