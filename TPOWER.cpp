/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
unordered_map<unsigned int, ll> dem;
ll ans[40];
int n, a[100005];
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
    for (int i = 0; i < n; i++)
    {
        int s = 1;
        for (int p = 1; p <= min(32, k); p++)
        {s*=2;
            if(s-a[i]>=0)
            ans[p] += 1ll * dem[s - a[i]];
        }
        dem[a[i]]++;
    }
    for (int i = 1; i <= k; i++)
        cout << ans[i] << "\n";
}