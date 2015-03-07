#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define ff first.first
#define ss first.second 
#define pii pair< ll,ll >
#define piii pair< pii,ll >
#define que queue<int>
#define s(t) scanf("%ld",&t)
#define p(t) printf("%ld\n",t)
using namespace std;
int main()
{
ll i,j,k,l,n,m,t,T,f,p,ans,cnt,par,ele,r,g,b;
cin>>r>>g>>b;
ans=r+g+b;
if(r>(g+b)*2)
	ans=ans-(r-(g+b)*2);
if(g>(r+b)*2)
	ans=ans-(g-(r+b)*2);
if(b>(g+r)*2)
	ans=ans-(b-(g+r)*2);
cout<<ans/3;
	
return 0;
}
