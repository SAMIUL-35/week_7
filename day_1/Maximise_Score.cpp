// B M SAMIUL
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define endl   '\n';
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
#define PI 2.0 * acos(0.0)
#define Dpos(n) fixed << setprecision(n)
#define lpi(j) for(int i=0; i<n; i++) cin>>j[i]
#define lpo(j) for(int i=0; i<n; i++) cout<<j[i]<<" ";
#define so(j) for(j.begin(),j.end()) ;
#define sog(j)  sort(j.rbegin(), j.rend());
 
typedef long long ll;
typedef vector<ll> vl;
const ll N = 1e5 + 1;
const ll MOD = 1e9 + 7;
 
void sami()
{
ll n;
cin>>n;
vl a(n);

lpi(a);
ll ans=LLONG_MAX;
for (ll i = 1; i < n-1; i++)
{
    ll an=max(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]));
ans=min(ans,an);
}
ans = min(ans, abs(a[0] - a[1]));
ans = min(ans, abs(a[n-1] - a[n-2]));
	 
cout<<ans<<endl;

}
int main()
{
    op() int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
       
        sami();
    }
}
