///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n,m;
ll a[3005][3005];
ll ans[3005][3005];
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>m>>n;
    for(ll i=1;i<=m;i++)
        for(ll j=1;j<=n;j++)
            cin>>a[i][j];
    for(ll i=1;i<=n;i++)
        ans[1][i]=ans[1][i-1]+a[1][i];
    for(ll i=1;i<=m;i++)
        ans[i][1]=ans[i-1][1]+a[i][1];
    for(ll i=2;i<=m;i++)
        for(ll j=2;j<=n;j++)
            ans[i][j]=max(ans[i][j-1]+a[i][j],ans[i-1][j]+a[i][j]);
    cout<<ans[m][n];
}