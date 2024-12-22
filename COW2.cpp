///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,m;
ll x[1000005];int ans;
void ChatGPT()
{
    ll l=1,r=1e9;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        int pos=0;
        int cow=0;
        while(pos<n)
        {
            cow++;
            pos=lower_bound(x+pos,x+n,x[pos]+mid)-x;
        }
        if(cow>=m)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
}
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
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    sort(x,x+n);
    ChatGPT();
    cout<<ans;
}