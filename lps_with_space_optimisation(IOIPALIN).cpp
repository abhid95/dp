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
#define s(t) scanf("%d",&t)
#define p(t) printf("%d\n",t)
using namespace std;

int dp[3][5005];
int main()
{
int i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,c;
char x,a[100005];
s(n);
scanf("%s",a);
FOR(2)
{
    rep(j,n)
        dp[i][j]=0;
}
for(i=1;i<=n;i++)
{
    for(j=1;j<=n;j++)
    {
        if(a[i-1]==a[n-j])
        {
            dp[i%2][j]=1+dp[(i-1)%2][j-1];
        }
        else
        {
            dp[i%2][j]=max(dp[(i-1)%2][j],dp[i%2][j-1]);
        }
    }
}
p(n-dp[n%2][n]);


return 0;
}


