/*

 * EOF.cpp
 *
 *  Created on: Oct 17, 2015
 *      Author: user


#include <iostream>
#include<string>
#include<climits>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

int main(){
	string str;
	getline(cin,str);
	map<int,map<string,int> > v;
	for(int i=0;i<str.length();i++){
		string tmp;

		if(isupper(str[i])){
			while(isupper(str[i])){
				tmp+=str[i];
				i++;
			}

			v[tmp.length()][tmp]++;

		}
	}
cout<<"Printing ..."<<endl;
	map<int,map<string,int> >::iterator it;
	map<string,int>::iterator it2;
	for(it=v.begin();it!=v.end();it++){
		cout<<it->first<<" : ";
		for(it2=it->second.begin();it2!=it->second.end();it2++){
			cout<<it2->first<<" ";
		}
		cout<<endl;
	}
}

*/
