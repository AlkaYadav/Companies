/*

 * lexicographic.cpp
 *
 *  Created on: Oct 19, 2015
 *      Author: user


#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<string>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

int factorial(int n)
{
    return (n <= 1)? 1 :n * factorial(n-1);
}

int findSmalldNumberOnright(string a,int index,char b){
	int cnt=0;
	for(int i=index+1;i<a.length();i++){
		if(a[i]<b){
			cnt++;
		}
	}
	return cnt;
}


int findLexicographicRank(string a){
int mul=factorial(a.length());
int len=a.length();
int rank=1;
	for(int i=0;i<a.length();i++){
		mul=mul/(len-i);
		int numberOnRight=findSmalldNumberOnright(a,i,a[i]);
        rank+=mul*numberOnRight;
	}

	cout<<"rank is" <<rank<<endl;
}

int main(){
string a="string";
findLexicographicRank(a);
}
*/
