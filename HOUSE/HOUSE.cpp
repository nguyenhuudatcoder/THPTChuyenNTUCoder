/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n, c[100005], ans;
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
        cin >> c[i];
    for (int i = 1; i < n; i++)
    {
        if (c[i - 1] > c[i]){
            ans = max(ans,c[i - 1] - c[i]);
            c[i]=c[i-1];}
    }
    if (ans == 0)
        cout << -1;
    else
        cout << ans;
}