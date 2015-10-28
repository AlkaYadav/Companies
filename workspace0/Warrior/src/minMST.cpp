#include <iostream>
#include<vector>
using namespace std;

long long find(long long parent[],long long x){
	return parent[x]=(x==parent[x]?x:find(parent,parent[x]));
}

void union_Set(long long  parent[],long long  size[],long long  x,long long  y){
	x=find(parent,x);
	y=find(parent,y);
	if(x!=y){
		if(size[x]<=size[y]){
			parent[x]=y;
			size[y]++;
		}
		else{
			parent[y]=x;
			size[x]++;
		}
	}
}

int main()
{
    long long int T,N,M,x,y,edge_no;
    cin>>T;
    while(T--){
    	long long int N,M,x,y,edge_no;
    	cin>>N>>M;
    	long long int parent[N+1],size[N+1];
    	for(int i=1;i<=N;i++){
    		parent[i]=i;
    		size[i]=1;
    	}
    	vector<pair<long long int,long long int> > v(M+1);
    	for(long long int i=1;i<=M;i++){
    		cin>>x>>y;
    		v[i]=(make_pair(x,y));

    	}
    	bool flag=true;
    	//cout<<"N is "<<N<<endl;
    	for(long long int i=1;i<=N-1;i++){
    		cin>>edge_no;
    		long long int node1=v[edge_no].first;
    		long long int node2=v[edge_no].second;

    		if(find(parent,node1)!=find(parent,node2)){
    			union_Set(parent,size,node1,node2);
    		}
    		else{
    			//cout<<"For node "<<node1<<" "<<node2<<endl;
    			flag=false;
    			//cout<<"NO"<<endl;
    			//break;
    		}
    	}

    	if(flag){
    		cout<<"YES"<<endl;
    	}
    }
    return 0;
}
