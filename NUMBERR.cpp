/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll x;
int dem[1005], k, ans;
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
    while (n--)
    {
        cin >> x;
        dem[x % k]++;
    }
    ans += min(1, dem[0]);
    if (k%2==0)
    {
        ans += min(1, dem[k / 2]);
        for (int i = 1; i <= k / 2 - 1; i++)
        {
            ans += max(dem[i], dem[k - i]);
        }
    }
    else
        for (int i = 1; i <= k / 2; i++)
        {
            ans += max(dem[i], dem[k - i]);
        }
    cout << ans;
}