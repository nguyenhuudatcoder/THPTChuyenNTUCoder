///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n;
int code[2]={3,8};
int a[25];
int dem;
void in()
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";cout<<"\n";
}
void ChatGPT(int j)
{
    for(int i=0;i<2;i++)
    {
        a[j]=code[i];
        if(code[i]==3)dem++;
        ChatGPT(j+1);
        dem--;
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

}