///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,a[1000005],x;
ll ans;
void ChatGPT()
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            int pos=i;
            int l=0,r=i-1;
            while(l<=r)
            {
                int m=(l+r)/2;
                if(-a[m]>=a[i])
                {
                    l=m+1;
                }
                else
                {
                    r=m-1;
                    pos=m;
                }
            }
            ans+=i-pos;
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
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        a[i]=a[i]-x;
    }
    sort(a,a+n);
    ChatGPT();
    cout<<ans;
}