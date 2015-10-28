/*

 * stringReverse.cpp
 *
 *  Created on: Oct 7, 2015
 *      Author: user





#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
    	string s;
    	cin>>s;
    	int l=0;
    	int h=s.length()-1;
    	//cout<<"Length h is"<<h<<endl;
    	while(l<h){
    		char tmp=s[l];
    		s[l]=s[h];
    		s[h]=tmp;
    	}
    	cout<<s<<endl;
    }
    return 0;
}
*/
