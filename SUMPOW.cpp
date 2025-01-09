///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll n;
vector<ll> ans;
ll luythua[35],s;
int pos;
void ChatGPT(int dick)
{
    for(int i=pos;i<=31;i++)
    {
        pos=i;
        if(s+luythua[i]==n){
            for(auto a:ans)cout<<a<<" ";
            exit(0);
        }
        else if(s+luythua[i]<n)
        {
            s+=luythua[i];
            ans.push_back(luythua[i]);
            ChatGPT(dick+1);
        }
    }
    s-=ans.back();
    ans.pop_back();
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
    cout.tie(0);cin>>n;luythua[0]=1;
    for(int i=1;i<=31;i++)
        luythua[i]=luythua[i-1]*2;
        ChatGPT(0);
}