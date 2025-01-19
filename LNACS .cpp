/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int m, n;
int a[1050], b[1050];
int dp[1050][1050];
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
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 2; i <= m+1; i++)
        for (int j = 2; j <= n+1; j++)
        {
            if (a[i-1] == b[j-1])
                dp[i][j] = dp[i - 2][j - 2] + 1;
            else
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    cout << dp[m+1][1+n];
}