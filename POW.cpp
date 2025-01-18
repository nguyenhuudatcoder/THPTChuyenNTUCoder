/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll a, n;
// tham khảo modul nghịch đảo
ll luythua(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b /= 2;
    }
    return res;
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
    cin >> a >> n;
    if (a == 1)
        cout << (n+1 % mod);
    else
    {
        ll m = luythua(a, n + 1);
        m = (m - 1 + mod) % mod;
        a = luythua(a-1, mod-2);
        cout << m * a % mod;
    }
}