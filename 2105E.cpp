/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m, k;
ll a[1505][1505], ans = -inf;
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
    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            a[i][j] = a[i - 1][j] + a[i][j - 1] + a[i][j] - a[i - 1][j - 1];
            // cout<<a[i][j]<<" ";
        }
        // cout<<"\n";
    }
    for (int i = k; i <= n; i++)
        for (int j = k; j <= m; j++)
            ans = max(ans, a[i][j] - a[i - k][j] - a[i][j - k] + a[i - k][j - k]);
    cout << ans;
}