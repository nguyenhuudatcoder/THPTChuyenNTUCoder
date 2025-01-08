/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;ll a[200005], s,ans=inf;
void ChatGPT(int i)
{
    int l=i+1,r=n-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        ans=min(ans,max({a[n-1]-a[m],a[i],a[m]-a[i]})-min({a[n-1]-a[m],a[i],a[m]-a[i]}));
        if(a[m]-a[i]>=s) r=m-1;
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i - 1] + a[i];
    }
    s=a[n-1]/3;
    for(int i=0;i<n-1;i++)
        ChatGPT(i);
cout<<ans;}