///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int t;
ll a,b,k;
void ChatGPT()
{
    ll l=0,r=1e18;
    while(l<=r)
    {
        ll m=(l+r)/2;
        ll ab=a*b/__gcd(a,b);
        ll pos=m-(m/a+m/b-m/ab);
        if(pos>=k) r=m-1;
        else l=m+1;
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
cin>>t;
while(t--)
{
    cin>>k>>a>>b;

}
}