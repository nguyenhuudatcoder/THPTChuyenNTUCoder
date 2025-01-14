/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
string a;
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
    cin >> a;
    int x = a.size();
    for (int i = sqrt(x); i >= 1; i--)
        if (x % i == 0)
        {
            x = i;
            break;
        }
    // int y = a.size() / x;
    for (int i = 0; i < x; i++)
        for (int j = i; j < a.size(); j += x)
            cout << a[j];
}