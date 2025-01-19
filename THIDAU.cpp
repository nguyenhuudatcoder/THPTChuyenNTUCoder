/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
struct dick
{
    int day, bounty;
};
dick a[1005];
int dp[380];
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
        cin >> a[i].day;
    for (int i = 0; i < n; i++)
        cin >> a[i].bounty;
    sort(a, a + n);
    dp[a[0].day] = a[0].bounty;
    for (int i = 1; i < n; i++)
        for (int j = 0; j <= a[i].day - k; j++)
            dp[a[i].day] = max(dp[a[i].day], dp[j] + a[i].bounty);
    int ans = *max_element(dp, dp + 370);
    cout << ans;
}