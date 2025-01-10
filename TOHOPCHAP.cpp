/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k, pos;
ll a[10], ans[10], res;
void in()
{
    for (int i = 0; i < k; i++)
        cout << ans[i] << " ";
    cout << "\n";
}
void ChatGPT(int m)
{
    for (int i = pos; i <= n; i++)
    {
        pos = i + 1;
        if (m == k)
        {
            res++;
            in();
            return;
        }
        ans[m] = a[i];
        ChatGPT(m + 1);
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
    cin >> k >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];sort(a,a+n);
    ChatGPT(0);
    cout << res;
}