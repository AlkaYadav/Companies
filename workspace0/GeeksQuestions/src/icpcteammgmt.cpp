/*

 * icpcteammgmt.cpp
 *
 *  Created on: Oct 4, 2015
 *      Author: user


#include <iostream>
#include<map>
#include<cstring>
#include<string.h>
using namespace std;

int main()
{
    int T,n,k;
    cin>>T;
    while(T--){
    	cin>>n>>k;
    	map<int,int> m;
    	for(int i=0;i<n;i++){
    		string name;
    		cin>>name;
    		m[name.length()]+=1;
    	}
    	map<int,int>::iterator it;

    	int flag=1;
    	for(it=m.begin();it!=m.end();it++){
    		cout<<it->first<<" "<<it->second<<endl;
    		if(it->second!=k){
    			flag=0;
    			break;
    		}
    	}
    	if(flag){
    		cout<<"Possible"<<endl;
    	}
    	else{
    		cout<<"Not possible"<<endl;
    	}
    }
    return 0;
}
*/
