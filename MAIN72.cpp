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
int dp[100][100005];
int a[100];
int sum[100005],ans;
void func(int i,int n,int j)
{
    if(sum[j]==0)
    {
        sum[j]=1;
        ans+=j;
    }
    if(i==n)
        return;
    if(dp[i][j])
        return;
    func(i+1,n,j);
    func(i+1,n,j+a[i]);
    dp[i][j]=1;
}
int main()
{
int i,j,k,l,n,m,t,T,f,p,cnt,par,ele;
char x;
s(t);
while(t--)
{
    s(n);
    FOR(n)
        s(a[i]);
    FOR(n)
        memset(dp[i],0,sizeof dp[i]);
    memset(sum,0,sizeof sum);
    ans=0;
    func(0,n,0);
    p(ans);

}


return 0;
}



