/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, m, ans, k;
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
    cin >> m >> n >> k;
    ll l = 1, r = m * n;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll res = 0;
        for (ll i = 1; i <= m; i++)
            res += min(mid / i, n);
        if (res >= k)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid+ 1;
    }
    cout << ans;
}