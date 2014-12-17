#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define que queue<int>
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
using namespace std;


int main()
{
ll i,j,k,l,n,m,t,T,f,p,ans,cnt,par,lcs[10][10];
char x,a[10],b[10];
cin>>a>>b;
FOR(strlen(a)+1)
{
    rep(j,strlen(b)+1)
    {
        if(i==0 || j==0)
            lcs[i][j]=0;
        else if(a[i-1]==b[j-1])
            lcs[i][j]=1+lcs[i-1][j-1];
        else
            lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
    }
}
p(lcs[strlen(a)][strlen(b)]);
return 0;
}


