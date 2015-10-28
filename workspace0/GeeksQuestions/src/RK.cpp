/*

 * RK.cpp
 *
 *  Created on: Oct 4, 2015
 *      Author: user



#include <iostream>
#include <limits.h>
#include<vector>
using namespace std;

int findMaxSum(vector<int> v){
	int curr_sum=v[0];
	int max_sum=curr_sum;
	for(int i=1;i<v.size();i++){
		curr_sum=max(v[i],curr_sum+v[i]);
		max_sum=max(max_sum,curr_sum);
	}
	return max_sum;
}
int main()
{
    int T;
    cin>>T;
    for(int k=0;k<T;k++){
    string S;
    cin>>S;
    vector<int> v;
    int cnt=0;
    for(int i=0;i<S.length();i++){
    	if(S[i]=='R'){
    		cnt++;
    		v.push_back(-1);
    	}
    	else{
    		v.push_back(1);
    	}
    }

    int sum=findMaxSum(v);
    cout<<"Hi"<<endl;
    cout<<cnt+sum<<endl;
    }
    return 0;
}


*/
