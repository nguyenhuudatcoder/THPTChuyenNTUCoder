/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll ans[100005];
unsigned ll n, a[100005];
unsigned ll s = 1;
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
    int k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int p = 1; p <= min(k, 65); p++)
    {
        s *= 2;
        for (int i = n - 1; i > 0; i--)
        {
            if (s > a[i])
            {
                unsigned ll m = s - a[i];
                int x = lower_bound(a, a + i , m) - a;
                int y = upper_bound(a, a + i , m) - a;
                ans[p] += y - x;
            }
        }
    }
    for (int i = 1; i <= k; i++)
        cout << ans[i] << "\n";
}