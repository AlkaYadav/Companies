/*

 * oz.cpp
 *
 *  Created on: Oct 4, 2015
 *      Author: user


#include <iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
    	string s;
    	cin>>s;
    	//int cnt=0;
    	vector<int> v;
    	map<char,int> m;
    	for(int i=0;i<s.length();i++){
    		m[s[i]]++;
    	}
    	int o_count=m['O'];
    	cout<<"O count is "<<o_count<<endl;
    	int index=0;

    	int cnt=0;
    	while(o_count && index<s.length()){
    		if(s[index]=='Z'){
    			cnt++;

    		}
    		else if(s[index]=='O'){
    			o_count--;
    		}
    		index++;
    	}
    	cout<<"count of z before O"<<cnt<<endl;
    	int swap_o=cnt*(cnt+1)/2;


    	int z_count=m['Z'];
    	 index=0;

    	 cnt=0;
    	while(z_count){
    		if(s[index]=='O'){
    			cnt++;

    		}
    		else if(s[index]=='Z'){
    			z_count--;
    		}
    		index++;
    	}
    	int swap_z=cnt*(cnt+1)/2;
    	cout<<min(swap_z,swap_o)<<endl;
    }
    return 0;
}



*/
