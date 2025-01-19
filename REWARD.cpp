#include<bits/stdc++.h>
using namespace std;
int n,a[100005],s[100005];int dp[100005][3];
void ass()
{
     for (int i = 0; i < n; i++)
    {
        dp[i][0] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        dp[i][1] = dp[i - 1][0] + a[i];
        dp[i][2] = dp[i - 1][1] + a[i];
    }
    cout << max({dp[n - 1][1], dp[n - 1][0], dp[n - 1][2]});
}
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        int t=a[i-1]+a[i];
        s[i]=max({s[i-3]+t,s[i-2]+a[i],s[i-1]});
    }
    cout<<s[n];
}
