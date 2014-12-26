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
ll u[1000][1000],e[1000][1000],dpu[1000][1000];
ll mxu[1000][1000],mxe[1000][1000],dpe[1000][1000];

int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele;
char x;
while(1)
{
    s(n);
    s(m);
    if(n==0 && m==0)
        break;
    for(i=n;i>=1;i--)
        for(j=m;j>=1;j--)
            s(e[i][j]);
    for(i=n;i>=1;i--)
        for(j=m;j>=1;j--)
            s(u[i][j]);
    for(i=0;i<=n;i++) dpe[i][0]=mxe[i][0]=0;
    for(i=0;i<=m;i++) dpe[0][i]=mxe[0][i]=0;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            dpu[i][j]=dpu[i][j-1]+u[i][j];
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            dpe[i][j]=dpe[i-1][j]+e[i][j];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
        {
            mxu[i][j]=dpu[i][j]+max(mxu[i-1][j],mxe[i-1][j]);
            mxe[i][j]=dpe[i][j]+max(mxe[i][j-1],mxu[i][j-1]);
        }
    }
     for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<dpu[i][j]<<" ";
        cout<<endl;
        }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout<<dpe[i][j]<<" ";
        cout<<endl;
        }

    p(max(mxu[n][m],mxe[n][m]));
}

return 0;
}



