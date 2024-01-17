#include <bits/stdc++.h>
using namespace std;

#define int long long
#define el '\n'
#define all(a) a.begin(),a.end()
#define sz(a) (int)a.size()


const int N=1e4+7;
const int MOD=1e9+7;

int n;
vector <int> a(N);

int cmp(int a,int b)
{
    if (min(a,b)>=10 || max(a,b)<=9) return a>b;
    if (a>=10) return (a/10>b) || (a/10==b && a%10>=b);
    return (a>b/10) || (a==b/10 && a>=b%10);
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for (int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.begin()+n,cmp);
    for (int i=0; i<n; i++) cout<<a[i];
    return 0;
}
