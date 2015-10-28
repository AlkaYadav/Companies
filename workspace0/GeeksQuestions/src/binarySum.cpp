/*
#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define elif else if
#define pii pair<ll int,ll int>
#define mp make_pair
#define pb push_back
using namespace std;
int val[1000006];
int main()
{
	freopen("in","r",stdin);
	freopen("out","w",stdout);
	int t;
	cin>>t;
	while(t--)
	{
		int i,j,k,n,m;
		cin>>n;
		assert(1<=n && n<=100000);
		memset(val,0,sizeof(val));
		std::vector<int> foo(n);
		std::vector<int> pok(n);
		int ans=0;
		for(i=0;i<n;i++)
		{
            int ta,tb;
            cin>>ta>>tb;
           // assert(1<=ta && ta<=1000000);
            //assert(1<=tb && tb<=1000000);
            val[ta]++;
            if(val[tb]==0)
            ans++;
            else
              val[tb]--;
		}
		cout<<ans<<"\n";
	}
	return 0;
}
*/
