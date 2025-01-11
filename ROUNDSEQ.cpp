/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int f[105];
int n;
void ChatGPT(int i)
{
    vector<int> arr;
    while (f[i] > 0)
    {
        arr.push_back(f[i] % 10);
        f[i] /= 10;
    }
    sort(arr.begin(), arr.end());
    for (auto a : arr)
        f[i] = f[i] * 10 + a;
}
int res[7] = {0,48889, 77789, 155578, 111356, 122227, 244445};
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
    f[1] = 1;
    for (int i = 2; i <= 50; i++)
    {
        f[i] = f[i - 1] * 2;
        ChatGPT(i);
        // cout << f[i] << "\n";
    }
    if (n <= 23)
        cout << f[n];
    else
    {
        n -= 24;
        n%=6;
        if(n==0)n=6;
        cout<<res[n];
    }
}