///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,x,a[1000005];
ll dp[1000005];
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
    cin>>n>>x;
    for(int i=0;i<n;i++) cin>>a[i];
    int start=*min_element(a,a+n);
    for(int i=start;i<=x;i++)
    {
        
        for(int j=0;j<n;j++)
            dp[i]+=dp[i-j]+1;
    }
}