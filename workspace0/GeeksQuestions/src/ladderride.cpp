/*

 * ladderride.cpp
 *
 *  Created on: Oct 5, 2015
 *      Author: user


#include <iostream>
#define MOD 1000000007
using namespace std;


int main(){
	long int t,n,k,cur;
	cin>>t>>n;
	while(t--){
		cin>>cur>>k;
		int d[n];
			for(int i=1;i<=n;i++){
				d[i]=0;
			}
			d[2]=1;
			d[5]=1;
			d[4]=1;
			for(int i=6;i<=n;i++){
								d[i]=(d[i-2]+d[i-5])%MOD;
							}
		if(cur<k || k==5){

		   cout<<d[cur]<<endl;
		}
		else if(cur>=k){
			d[k]=(d[k]+1)%MOD;
			for(int i=k+1;i<=cur;i++){
				d[i]=(d[i-2]+d[i-5]+d[i-k])%MOD;
			}
			cout<<d[cur]<<endl;
		}

	}
}
*/
