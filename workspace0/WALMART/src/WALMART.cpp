/*
//============================================================================
// Name        : WALMART.cpp
// Author      : alkayadav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	long long int N,X,cost=0;
	cin>>N;
	vector<long long int> a(N);
	for(long long int i=0;i<N;i++){
		cin>>a[i];
	}
	cin>>X;
	sort(a.begin(),a.end());
	long long int incr=0;
	for(long long int i=a.size()-1;i>=0;i--){
		if(a[i]+incr>=0){
			continue;
		}
		if(i+1>=X){
			cost+=-(a[i]+incr)*X;
			incr+=-1*(a[i]+incr);
		}
		else{
			cost+=(-1*(a[i]+incr));
		}
	}

	cout<<cost<<endl;
	return 0;
}
*/
