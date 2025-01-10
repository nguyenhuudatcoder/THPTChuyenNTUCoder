/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
ll n;
vector<ll> ans;
ll luythua[35], s;
int used[31];
void ChatGPT(int dick)
{
    for (int i = ans.size(); i <= 31; i++)
    {
        if (s + luythua[i] == n)
        {
            ans.push_back(luythua[i]);
            sort(ans.begin(), ans.end());
            for (auto a : ans)
                cout << a << " ";
            // cout << luythua[i];
            exit(0);
        }
        else if (s + luythua[i] < n && used[i] == 0)
        {
            used[i] = 1;
            s += luythua[i];
            ans.push_back(luythua[i]);
            ChatGPT(dick + 1);
        }
        else if (s + luythua[i] > n)
        {
            used[i] = 0;
            s -= ans.back();
            ans.pop_back();
            return;
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
    cin >> n;
    luythua[0] = 1;
    for (int i = 1; i <= 31; i++)
        luythua[i] = luythua[i - 1] * 2;
    ChatGPT(0);
}