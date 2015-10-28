#include <iostream>
#include<math.h>
using namespace std;

long long int arr[1000001];
void sieve(){
	long long int N=10000000;
	for(long long int i=0;i<=N;i++){
		arr[i]=1;
	}
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;
	for(int i=2;i<=N;i++){
		for(int j=2;j<=N/i;j++){
			arr[i*j]=0;
		}
	}
	/*
	cout<<"Sieve "<<endl;
	for(int i=0;i<=20;i++){
		cout<<arr[i]<<" ";
	}
	*/
}

bool isPoisonous(long long int ele){
	//cout<<"For ele "<<ele<<endl;
	if(arr[ele]==1 || ele==1){
		return true;
	}
	double tmp=(double)ele;
	 double tmp_s=sqrt(ele);
	//cout<<"Tmp "<<tmp<<endl;
	if(((double)(int)tmp_s*(int)tmp_s)==tmp){
	//cout<<"in tmp "<<ele<<endl;
		int res=tmp_s;
		if(arr[res]==1){
			return true;
		}
	}

	return false;
}
int main()
{
    long long int N,ele;
    cin>>N;
    sieve();
    for(long long int i=0;i<N;i++){
    	cin>>ele;

    	if(isPoisonous(ele)){
    		cout<<"NO"<<endl;
    	}
    	else{
    		cout<<"YES"<<endl;
    	}
    }
    return 0;
}
