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
vl a(n),b(n);
lpi(a);
lpi(b);
bool ok=true;
ll dif = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
         if(b[i] != 0) dif = min(dif, a[i] - b[i]);
    }
    
    if(dif < 0) ok= false; 
    if(dif == LLONG_MAX) ok= true;
    for (ll i = 0; i < n; i++)
    {
       if(a[i] - b[i] > dif) ok= false;
        if(b[i] != 0 && a[i] - b[i] < dif) ok= false;
    }
    
   
    
 

if(ok) {yes;}
else{ no;}
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
