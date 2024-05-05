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
string s1,s2;
cin>>s1;
ll capi=0,sma=0;
ll n=s1.size();
for (ll i = n-1; i >=0 ; i--)
{
     if(s1[i]=='b') sma++;
           else if(s1[i]=='B') capi++;
           else {
            if(s1[i]>='a' && s1[i]<='z')
            {
                if(sma) sma--;
                else s2.push_back(s1[i]);
            }
            if(s1[i]>='A'&& s1[i]<='Z')
            {
                if(capi) capi--;
                else s2.push_back(s1[i]);
            }
}
}
reverse(s2.begin(),s2.end());
cout<<s2<<endl;
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
