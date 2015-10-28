/*
 * magicFraction.cpp
 *
 *  Created on: Oct 26, 2015
 *      Author: user
 */

#include <iostream>
#include<math.h>
#include<map>
using namespace std;

int factorial(int N){
	if(N<=0)
		return 1;
	return N*factorial(N-1);
}
int magicFraction(int N){
	map<int,int> m;
	int tmp=N;
	if(N==1)
		return 0;
	if(N==2)
		return 1;

	int fact=factorial(N);
	int tmpfact=fact;
	for(int i=2;i<=tmpfact/2;i++){
		if(fact%i==0){

			while(fact%i==0){
			     m[i]++;
			     fact=fact/i;
			}

		}
	}

	int cnt=0;

	map<int,int>::iterator it;

	for(it=m.begin();it!=m.end();it++){
		cnt++;
	}
	cout<<"For "<<tmp<<"cnt is "<<cnt<<endl;
	if(cnt==2)
		return 2;

	return cnt+1;
}

int main(){
	int n;
	cin>>n;
	int cnt=0;

	for(int i=1;i<=n;i++){
		cnt+=magicFraction(i);
	}
	cout<<cnt<<endl;
}
