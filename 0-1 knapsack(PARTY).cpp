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

ll k[505][10005];
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,w,W,wt[100005],val[100005];
char x;
while(1)
{
    s(W);
    s(n);
    if(W==0 && n==0)
        break;
    FOR(n)
        scanf("%lld%lld",&wt[i],&val[i]);
    FOR(n)
        k[i][0]=0;
    FOR(W)
        k[0][i]=0;
    for(i=0;i<=n;i++)
    {
        for(w=0;w<=W;w++)
        {
            if(i==0 || w==0)
                k[i][w]=0;
            else if(wt[i-1]<=w)
            {
                k[i][w]=max(val[i-1]+k[i-1][w-wt[i-1]],max(k[i-1][w],k[i][w-1]));

            }
            else
                k[i][w]=max(k[i-1][w],k[i][w-1]);

        }
    }
    i=W;
    while(i!=0 && k[n][i]==k[n][W])
        i--;
    printf("%lld %lld\n",i,k[n][W]);
}


return 0;
}


