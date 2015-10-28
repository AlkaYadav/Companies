/*
//============================================================================
// Name        : GeeksQuestions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<map>
using namespace std;

bool areIsomorphic(string a,string b){
	int len1=a.length();
	int len2=b.length();
	if(len1!=len2){
		return false;
	}
	map<char,char> m;
	map<char,bool> visited;
	for(int i=0;i<len1;i++){
		if(m[a[i]]){
			if(m[a[i]]!=b[i]){
				return false;
			}
		}
		else{
			if(visited[b[i]]==true){
				return false;
			}
			m[a[i]]=b[i];
			visited[b[i]]=true;
		}
	}
	return true;
}
int main() {
	string a="ax";
	string b="xa";
	cout<<"Isomorphic "<<areIsomorphic(a,b)<<endl;
	return 0;
}
*/
