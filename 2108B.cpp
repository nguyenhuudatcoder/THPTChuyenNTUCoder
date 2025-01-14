///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
string s;
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
    cin>>s;
    s='0'+s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='0')
        {
            s[i]='1';
            for(int j=i+1;j<s.size();j++)
                s[j]='0';break;
        }
    }
    if(s[0]=='0')s.erase(0,1);
    cout<<s;
}