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
int i,j,dp[2005][2005];
int EditDistanceDP(char X[],char Y[])
{
    int cost=0;
    int leftCell,topCell,cornerCell;
    int m=strlen(X)+1;
    int n=strlen(Y)+1;
    FOR(m)
        rep(j,n)
            dp[i][j]=-1;
    FOR(m)
        dp[i][0]=i;
    rep(j,n)
        dp[0][j]=j;
    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            leftCell=dp[i][j-1];
            leftCell+=1;

            topCell=dp[i-1][j];
            topCell+=1;

            cornerCell=dp[i-1][j-1];
            cornerCell+=(X[i-1]!=Y[j-1]);

            dp[i][j]=min(leftCell,min(topCell,cornerCell));
        }
    }
    cost=dp[m-1][n-1];
    return cost;
}
int main()
{
int i,j,l,n,m,t,T,f,p,ans,cnt,par,ele;
char x,a[2005],b[2005];
s(t);
while(t--)
{
    scanf("%s",a);
    scanf("%s",b);
    p(EditDistanceDP(a,b));
}

return 0;
}



