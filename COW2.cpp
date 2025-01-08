/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, m, a[100005], ans;
void ChatGPT()
{
    int l = 1, r = a[n - 1] - a[0];
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int i = 0, dem = 0;
        while (i < n)
        {
            dem++;
            i = lower_bound(a + i, a + n, a[i] + mid) - a;
        }
        if (dem < m)
            r = mid - 1;
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans;
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
    sort(a, a + n);
    ChatGPT();
}