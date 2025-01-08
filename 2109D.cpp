/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, m, a[100005], ans;
void lantern()
{
    ll l = 1, r = 1e18;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll robots = 0;
        for (int i = 0; i < m; i++)
            robots += (a[i] + mid - 1) / mid;
        if (robots <= n&&robots>0)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
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
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    lantern();
    cout << ans;
}