/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, pos, use;
ll m, a[25], ans;
void ChatGPT(ll s)
{
    for (int i = pos; i < n; i++)
    {
        if(a[i]!=-1){
        pos = i + 1;
        ll x = s;
        s = s * a[i] / __gcd(s, a[i]);
        use++;
        if (use != 2&&use>0)
            ans += m / s;
        else
            ans -= m / s;
        ChatGPT(s);
        s = x;
        use--;}
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
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for(int i=0;i<n-1;i++)if(a[i]!=-1)
        for(int j=i+1;j<n;j++)
            if(a[j]!=-1){
            if(a[j]%a[i]==0)a[j]=-1;
            else if(a[i]%a[j]==0){a[i]=-1;break;}}
    ChatGPT(1);
    cout << ans;
}