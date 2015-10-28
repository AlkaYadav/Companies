/*
#include <iostream>
#include<set>
#include<vector>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--){
    	unsigned long long int N,M,ele;
    	cin>>N>>M;
    	set<unsigned long long int> s;
    	vector<unsigned long long int >arr(M+N);
    	for(unsigned long long int i=0;i<N+M;i++){
    		cin>>ele;
    		if(i<N)
    		s.insert(ele);
    		arr[i]=ele;
    	}


    	for(unsigned long long int i=N;i<N+M;i++){
    		ele=arr[i];
    	if(s.find(ele)==s.end()){

    			cout<<"NO"<<endl;

    		}
    		else{
    			cout<<"YES"<<endl;
    		}
    		s.insert(ele);
    	}
    }
    return 0;
}

*/
