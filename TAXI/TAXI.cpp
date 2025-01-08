/// A game is our childhood
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, x;
int ans;
int a[5];
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
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    ans += a[4];     // lấy nhóm 4
    ans += a[2] / 2; // ghép 2 với 2
    a[2] %= 2;       // lấy nhóm 2 người còn lại
    x = min(a[1], a[3]);
    ans += x; // lấy nhóm 1 và 3
    a[1] -= x;
    a[3] -= x;
    ans += a[3]; // nhóm 3 còn lại ko ghép được với nhóm khác
    if (a[2] > 0)   //vẫn còn nhóm 2
    {
        ans ++;
        a[1] = max(0, a[1] - 2);    // nếu còn 0 hoặc nhóm 1
    }
    ans += (a[1] + 3) / 4;
    cout << ans;
}