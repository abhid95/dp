//spent much time so did after looking solution
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

ll dp[100][15];
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,k;
char x;
for(i=0;i<10;i++)
    dp[1][i]=1;
dp[1][10]=10;
for(i=2;i<=64;i++)
{
    for(j=0;j<10;j++)
    {
        for(k=j;k<10;k++)
        {
            dp[i][j]+=dp[i-1][k];
        }
    }
    for(j=0;j<10;j++)
        dp[i][10]+=dp[i][j];
}
s(t);
while(t--)
{
    s(m);
    s(n);
    printf("%lld %lld\n",m,dp[n][10]);
}

return 0;
}



