/*

 * boNGirl.cpp
 *
 *  Created on: Oct 4, 2015
 *      Author: user


#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T,M,N;
    cin>>T;
    while(T--){
    	cin>>M>>N;
    	int m;
    	vector<int> v_m,v_n;
    	for(int i=0;i<M;i++){
    		cin>>m;
    		v_m.push_back(m);
    	}
    	for(int i=0;i<N;i++){
    		cin>>m;
    		v_n.push_back(m);
    	}

    	sort(v_m.begin(),v_m.end());
    	sort(v_n.begin(),v_n.end());
    	int flag=1;
    	for(int i=0,j=0;i<M&& j<N;i++,j++){
    		if(v_m[i]<=v_n[j]){
    			flag=0;
    			break;
    		}
    	}
    	if(flag){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}
    }
    return 0;
}



*/
