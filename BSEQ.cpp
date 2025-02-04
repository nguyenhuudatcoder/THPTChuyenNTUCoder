/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[5005];
int ans;
void ChatGPT(int beg, int i, int j)
{
    ll t = 0;
    ll k = 0;
    while (j <= n)
    {
        t += a[j];
        while (i < j && k < t)
        {
            k += a[i];
            t-=a[i];
            i++;
        }
        if (k == t)
            ans = max(j - beg + 1, ans);
        j++;
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
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
    {
        ChatGPT(i,i,i);
    }
    cout << ans;
}