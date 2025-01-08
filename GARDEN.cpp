/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll L, ans;
struct garden
{
    ll tree, fresh;
};
garden a[100005];
void ChatGPT(ll r)
{
    ll l = 0;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        ll litter = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i].tree>m)continue;
            litter += (m - a[i].tree + a[i].fresh - 1) / a[i].fresh;
        }
        if (litter <= L)
        {if(litter>=0)
            ans = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    cout << ans;
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
    cin >> n >> L;
    for (int i = 0; i < n; i++)
        cin >> a[i].tree >> a[i].fresh;
    ChatGPT(1e16);
}
