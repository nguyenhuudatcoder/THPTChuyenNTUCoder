///Kiên is reliable!!!
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
ll a[1000005],m[1000005],ans=-inf;
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
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    m[0]=a[0];
    for(int i=1;i<n;i++)
        m[i]=min(m[i-1],a[i]);
    for(int i=1;i<n;i++)
        ans=max(ans,a[i]-m[i-1]);
    cout<<ans;
}