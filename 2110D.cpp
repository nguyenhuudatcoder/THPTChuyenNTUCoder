///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
int n,k;
int a[100005];
void nextth(int i)
{
    if(i==0){
        cout<<-1;
        exit(0);
    }
    if(a[i]<n-k+i){
        a[i]++;
        return;
    }
    nextth(i-1);
    a[i]=a[i-1]+1;
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
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        cin>>a[i];
    nextth(k);
    for(int i=1;i<=k;i++)
        cout<<a[i]<<" ";
}