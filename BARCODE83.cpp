/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int code[2] = {3, 8};
int a[25];
int dem;
void in()
{
    if (n & 1)
    {
        for (int i = 1; i < n; i++)
            if (a[i] == 8 && a[i + 1] == 8)
                return;
    }
    else if (dem != n / 2)
        for (int i = 1; i < n; i++)
            if (a[i] == 8 && a[i + 1] == 8)
                return;
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << "\n";
}
void ChatGPT(int j)
{
    if (j == n + 1)
    {
        in();
        return;
    }
    for (int i = 0; i < 2; i++)
    {
        a[j] = code[i];
        if (code[i] == 3)
            dem++;
        ChatGPT(j + 1);
        if(a[j]==3)
        dem--;
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
    ChatGPT(1);
}