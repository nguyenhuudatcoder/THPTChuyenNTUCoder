///Suck Kiên's brain is very good to your brain
///Kiên will become Vegapunk
///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define int long long
#define mod 1000000007
using namespace std;
int n,ans;
int k;
vector<int> a;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++){
            if(a[i]<=k&&a[j]<=k)
                if(max(a[j],a[i])/__gcd(a[i],a[j])*min(a[i],a[j])<=k)
                    ans++;
        }
    cout<<ans;
}
