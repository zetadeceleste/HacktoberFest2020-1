//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;
 
#pragma GCC             optimize ("Ofast")
#pragma GCC             optimize("O3")
#define ll              long long
#define lo(i,a,n,x)     for(i=a;i<=n;i=i+x)
#define sca(n)          scanf("%lld", &n)
#define pri(n)          printf("%lld", n)
#define SORT(x)         sort(x.begin(), x.end())
#define REV(x)          reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define distance(a,b)   (sq(a.x-b.x) + sq(a.y-b.y))
#define end0            "\n"
#define end1            cout<<"\n";
#define pi              acos(-1)
#define mod             1000000007
#define inf             999999999999999999
#define eps             10e-9
 
 
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
	//freopen("test.txt","r",stdin);
 
 
    ll t,i,x,y,n,p,q;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        if(n%x==y) cout<<n<<end0;
        else{
            p=n%x;
            q=(n/x)-1;
            //cout<<p<<end0;
            if(y>p) cout<<(q*x)+y<<end0;
            else cout<<n-(p-y)<<end0;
        }
 
 
    }
 
 
    return 0;
}
