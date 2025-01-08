/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, a[1000050], m, h;
void ChatGPT()
{
    ll l = 1, r = *max_element(a, a + n);
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        ll wood = 0;
        for (int i = 0; i < n; i++)
            wood += max(0ll, a[i] - mid);
        if (wood >= m)
        {
            l = mid + 1;
            h = mid;
        }
        else
            r = mid - 1;
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
    for (int i = 0; i < n; i++)
        cin >> a[i];
    ChatGPT();
    cout << h;
}