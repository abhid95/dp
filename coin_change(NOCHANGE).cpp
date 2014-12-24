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
int table[1000006][6],m,n;
int count(int a[],int m,int n)
{
    int i;
    FOR(n)
        table[0][i]=1;
    for(int i=1;i<m+1;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x=(i-a[j]>=0)?table[i-a[j]][j]:0;
            int y=(j>=1)? table[i][j-1]:0;
            table[i][j]=x+y;
        }
    }
    return table[m][n-1];
}
int main()
{
int i,j,l,t,T,f,p,ans,cnt,par,ele,a[10];
char x;
s(m);
s(n);
for(i=0;i<n;i++)
    s(a[i]);
for(i=1;i<n;i++)
{
    a[i]+=a[i-1];
}
if(count(a,m,n))
    printf("YES\n");
else
    printf("NO\n");
/*FOR(m){
    rep(j,n+1)
        printf("%d ",table[i][j]);
    printf("\n");
    }*/

return 0;
}



