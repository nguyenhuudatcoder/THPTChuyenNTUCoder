/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, ans = 1, l = 1;
int pos = -1;
int a[100005];
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
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[n + 1] = INT_MAX;
    // a[0]=a[1];
    for (int r = 1; r <= n; r++)
    {
        if (a[r] >= a[r + 1])
        {
            if (pos != -1)
            {
                ans = max(ans, r - l+1);
                l = pos;
                pos = -1;
            }
            if (a[r - 1] + 1 >= a[r + 1])
            {
                ans = max(ans, r - l + 1);
                l = r + 1;
            }
            else
            {
                a[r] = a[r - 1] + 1;
                pos = r + 1;
            }
        }
    }
    ans = max(ans, n - l + 1);
    cout << ans;
}