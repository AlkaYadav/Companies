/*

 * lexiSmallestPermutation.cpp
 *
 *  Created on: Oct 21, 2015
 *      Author: user


#include <iostream>
#include<vector>
#include<climits>
#include<string>
#include<algorithm>
#include<vector>
#include<ctime>   //for isUpper
#include<map>
using namespace std;

//lexicographically smallest permutation given as signature
void reverse(vector<int> &v,int start,int end){
	while(start<end){
		int tmp=v[start];
		v[start]=v[end];
		v[end]=tmp;
		start++;
		end--;
	}
}
void lexicoSmallestPermutation(string str){
	int len=str.length();
	vector<int> v(len+1);
    for(int i=0;i<=len;i++){
    	v[i]=i+1;
    }
    int index_d=0,index_end;
    for(int i=0;i<len;i++){
    	if(str[i]=='i'){
    		continue;
    	}
    	if(str[i]=='d'){
    		index_d=i;
    	}
    	while(str[i]=='d' && i<len){
    		i++;
    	}
    	index_end=i;
    	reverse(v,index_d,index_end);
    }

    for(int i=0;i<=len;i++){
    	cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
	string str="iiidd";
	//str="di";
	lexicoSmallestPermutation(str);
}
*/
