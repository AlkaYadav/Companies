/*
#include <iostream>
using namespace std;
bool isPossible(long int cost[],long int N,long int X){
	bool flag=false;
	for(long int i=0;i<N;i++){
		long int sum=cost[i];
		for(int j=i+1;j<N&&!flag;j++){
			sum+=cost[j];
			if(sum==X){
				flag=true;
				break;
			}
			if(sum>X){
				break;
			}
		}
	}
return flag;
}
bool isPossibleLinear(long int cost[],long int N,long int X){
	int start=0;
	int sum=cost[0];
	if(sum==X){
		return true;
	}
	for(int i=1;i<N;i++){
		//cout<<"Sum is "<<sum<<endl;
		if(sum==X){
					return true;
				}
		if(sum<X)
		   sum+=cost[i];

		while(sum>X){
			sum-=cost[start];
			start++;
		}


	}
	if(sum==X){
		return true;
	}
	return false;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
    	long int N,X;
    	cin>>N>>X;
    	long int cost[N];
    	for(long int i=0;i<N;i++){
    		cin>>cost[i];
    	}
    	bool flag=isPossibleLinear(cost,N,X);
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
