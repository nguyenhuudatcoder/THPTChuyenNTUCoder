/// Made by Nguyễn Hữu Đạt
/// timelimit
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int use[25], a[25];
int n, aver;
vector<vector<int>> ans;
int posmain,posalt;
void get()
{
    vector<int> b;
    for (int i = 0; i < n; i++)
        b.push_back(use[i]);
    ans.push_back(b);
}
void getFieldALT(int s)
{
    for (int i = posalt; i < n; i++)
    {
        posalt=i+1;
        if (use[i] == 0)
        {
            s += a[i];
            use[i] = 1;
            if (s <= aver)
            {
                if (s == aver)
                {
                    get();
                }
                getFieldALT(s);
            }
            s -= a[i];
            use[i] = 0;
        }
    }
}
void getFieldMAIN(int s)
{
    for (int i = posmain; i < n; i++)
    {
        posmain=i+1;
        if (use[i] == 0)
        {
            use[i] = 2;
            s += a[i];
            if (s <= aver)
            {
                if (s == aver)
                {
                    posalt=0;
                    getFieldALT(0);
                }
                getFieldMAIN(s);
            }
            s -= a[i];
            use[i] = 0;
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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        aver += a[i];
    }
    if (aver % 3 != 0)
        cout << -1;
    else
    {
        aver /= 3;
        getFieldMAIN(0);
        sort(ans.begin(),ans.end());
        cout << ans.size() << "\n";
        for (int i = ans.size()-1; i >=0; i--)
        {
            for (int j = 0; j < ans[i].size(); j++)
                if (ans[i][j] == 0)
                    cout << 'C';
                else if (ans[i][j] == 2)
                    cout << 'A';
                else
                    cout << 'B';
            cout << '\n';
        }
    }
}
    