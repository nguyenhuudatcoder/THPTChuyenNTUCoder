/// Suck Kiên's brain is very good to your brain
/// Kiên will become Vegapunk
/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
// #define int long long
#define mod 1000000007
using namespace std;
string a, b;
int ans[3005][3005];
int res;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> a >> b;
    int n=a.size();
    int m=b.size();
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
                ans[i][j] = ans[i - 1][j - 1] + 1;
            else
                ans[i][j] = max(ans[i - 1][j], ans[i][j - 1]);
        }
    cout<<ans[n][m];
}