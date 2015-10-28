/*

 * checkBaancedParen.cpp
 *
 *  Created on: Oct 26, 2015
 *      Author: user

#include<stack>
#include <iostream>
#include<stdlib.h>
using namespace std;


bool isBalanced(string str){
	stack<char> s;
	int len=str.length();
	int i=0;
	while(i<len){
		if(str[i]=='('){
			s.push('(');
		}
		else if(str[i]==')'){
			if(s.empty()){
				return false;
			}
			else{
				s.pop();
			}
		}
		i++;
	}
	if(!s.empty()){
		return false;
	}
	return true;

}

int main(){
	string str="(((())))()";
	cout<<"is Balanced "<<isBalanced(str)<<endl;
}
*/
