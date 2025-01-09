/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[100005], t, k;
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
    cin >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    while (t--)
    {
        cin >> k;
        int pos = lower_bound(a + 1, a + 1 + n, k) - a;
        pos--;
        int i = 0;
        while (k - a[pos] + i < pos && pos > 0)
        {
            i += k - a[pos];
            pos--;
        }
        cout << n - pos << "\n";
    }
}