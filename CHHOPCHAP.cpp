/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, k;
ll a[25], ans;
bool use[25];
ll b[25];
void in()
{
    ans++;
    for (int i = 0; i < k; i++)
        cout << b[i] << " ";
    cout << "\n";
}
void ChatGPT(int j)
{
    if(j==k){in();return;}
    for (int i = 0; i < n; i++)
    {
        if (use[i] == 0)
        {
            b[j] = a[i];
            use[i] = 1;
            ChatGPT(j+1);
            use[i]=0;
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
    cin>>k>>n;for(int i=0;i<n;i++)cin>>a[i];sort(a,a+n);
    ChatGPT(0);cout<<ans;
}