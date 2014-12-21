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
for(c=1;c<=n;c++)
{
    for(i=0;i<n-c+1;i++)
    {
        j=i+c-1;
        if(c==1)
            dp[i][i]=1;
        else if(a[i]==a[j] && c==2)
            dp[i][j]=2;
        else if(a[i]==a[j])
            dp[i][j]=dp[i+1][j-1]+2;
        else
            dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
    }
}
p(n-dp[0][n-1]);


return 0;
}


