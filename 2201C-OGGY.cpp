///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,pos;
ll m,a[25],ans;
map<ll,int> dem;
void ChatGPT(ll s)
{
    for(int i=pos;i<n;i++)
    {
        pos=i+1;
        ll x=s;
        s=s/__gcd(a[i],s)*a[i]; 
        if(s<=m){
            dem[s]++;
            ChatGPT(s);
        }
        s=x;
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
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i]!=a[i+1])
        ans+=m/a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1]){
        pos=i+1;
        ChatGPT(a[i]);}
    }
    for(auto i:dem) ans-=m/i.first;
    cout<<ans;
}