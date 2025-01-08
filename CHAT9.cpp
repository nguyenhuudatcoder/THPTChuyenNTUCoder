/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int q;
ll k;
ll f[1000005];
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
    for (ll i = 0; i <= 1e6; i++)
        f[i] = i * i * i - 2 * i + 5;
    cin >> q;
    while (q--)
    {
        cin >> k;
        ll res = lower_bound(f, f + 1000000, k) - f;
        if (f[res] == k)
            cout << res << "\n";else cout<<-1<<"\n";
    }
}