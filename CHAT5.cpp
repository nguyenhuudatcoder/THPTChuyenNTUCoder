/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[100005];
ll k, r, ans;
void ChatGPT()
{
    ll l = 1;
    while (l <= r)
    {
        ll m = (l + r) / 2;
        ll s = 0;
        for (int i = 0; i < n; i++)
            s += a[i] / m;
        if (s >= k)
            ans = m, l = m + 1;
        else
            r = m - 1;
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
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        r = max(r, a[i]);
    }
    ChatGPT();
    cout<<ans;
}