/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, a[1000005], Min[1000005];
ll ans = -1;
void ChatGPT(ll i)
{
    ll l = 0, r = i - 1;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        if (Min[m] >= a[i])
            l = m + 1;
        else
        {
            ans = max(ans, i - m);
            r = m - 1;
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
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    Min[0] = a[0];
    for (ll i = 1; i < n; i++)
        Min[i] = min(Min[i - 1], a[i]);
    for (ll i = 1; i < n; i++)
    {
        ChatGPT(i);
    }
    cout << ans;
}