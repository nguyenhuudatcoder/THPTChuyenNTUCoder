/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int a[10][10], ans = -2e9, s;
bool l[20], r[20], collumn[10];
void ChatGPT(int i)
{
    if (i == 9)
    {
        // cout << "\n";
        ans = max(s, ans);
        return;
    }
    for (int j = 1; j <= 8; j++)
    {
        if (collumn[j] == 0 && r[i-j] == 0 && l[i+j] == 0)
        {
            l[j + i] = 1;
            r[i - j] = 1;
            collumn[j] = 1;
            s += a[i][j];
            // cout << i << j << " ";
            ChatGPT(i+1);
            s -= a[i][j];
            collumn[j] = 0;
            l[j + i] = 0;
            r[i - j] = 0;
        }
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
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            cin >> a[i][j];
    ChatGPT(1);
    cout << ans;
}