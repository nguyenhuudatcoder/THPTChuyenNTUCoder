///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,pos;
ll a[25];
vector<ll> b={0,inf};
void ChatGPT(ll s)
{
    for(int i=pos;i<n;i++)
    {
        pos=i+1;
        s+=a[i];
        ChatGPT(s);
        b.push_back(s);
        s-=a[i];
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
    for(int i=0;i<n;i++){cin>>a[i];b.push_back(a[i]);}
    ChatGPT(0);
    sort(b.begin(),b.end());
    for(int i=0;i<b.size()-1;i++)
        if(b[i+1]-b[i]>1)
        {
            cout<<b[i]+1;
            exit(0);
        }
}