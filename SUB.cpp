/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
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
    int T, n;
    ll s, t, a[100005];
    cin >> T;
    while (T--)
    {
        t = -inf, s = -inf;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            t = max({t, t + a[i], a[i]});
            a[i] = a[i - 1] + a[i];
        }
        for (int i = 1; i <= n; i++)
        {
            s = max(s, a[i] - a[i - 1]);
            a[i] = min(a[i], a[i - 1]);
        }
        cout <<t << " " << s << "\n";
    }
}