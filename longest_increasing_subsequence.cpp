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
ll mx(ll a[],ll k)
{
    ll i,m,pos;
    m=0;
    FOR(k)
        if(a[i]>m)
            {m=a[i];pos=i;}
    return m;
}

int main()
{
ll i,j,k,l,n,m,t,T,f,ans,cnt,par,a[100005],lis[100005],b[100005];
char x;
s(n);
FOR(n)
    scanf("%lld%lld",&a[i]);
FOR(n)
    lis[i]=1;
for(i=1;i<n;i++)
    for(j=0;j<i;j++)
        if(a[i]>a[j] && lis[i]<lis[j]+1)
            lis[i]=lis[j]+1;
printf("%lld\n",mx(lis,n));

return 0;
}


