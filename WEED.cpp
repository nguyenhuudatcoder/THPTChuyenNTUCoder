#include<bits/stdc++.h>
#define int long long 
using namespace std;
int n,a[1000005];
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    cout<<abs(a[0]-a[n-1]);
}