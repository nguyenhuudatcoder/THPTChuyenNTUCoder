/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n, a[30005];
vector<int> ans;

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
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (ans.empty() || ans.back() < a[i])
            ans.push_back(a[i]);
        else
        {
            int l = 0, r = ans.size() - 1;
            int pos = -1;
            while (l <= r)
            {
                int m = (l + r) / 2;
                if (ans[m] >= a[i])
                {
                    pos = m;
                    r = m - 1;
                }
                else
                    l = m + 1;
            }
            ans[pos] = a[i];
        }
    }
    // for (auto i : ans)
    //     cout << i << " ";
    cout << ans.size();
}