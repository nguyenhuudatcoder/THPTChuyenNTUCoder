///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e8+7;
int n;ll s=2;
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
    cin>>n;n--;
    ll ans=1;
    while(n>0)
    {
        if(n&1) ans=ans*s%mod;
        s=s*s%mod;
        n/=2;
    }
    cout<<ans;
    // for(int i=2;i<=n;i++)
    //     f[i]=(f[i-1]+i*(i-1))%mod;
    // cout<<f[n];
}