///Made by Nguyễn Hữu Đạt
#include<bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf=LLONG_MAX;
const ll mod=1e9+7;
ll ans=1;
int n;string a,b;
//chú ý: "AND thứ i được hình thành bằng cách lấy DNA thứ i tương ứng của gen bố hoặc mẹ"
//nghĩa là khi ghép thì gen thứ i của bố và mẹ có thể chọn 1 trong 2
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
    cin>>a>>b;
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])ans*=2;cout<<ans;
}