#include<bits/stdc++.h>
#define ll long long int
#define nl "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std; 
//gcd
ll gcd(ll a, ll b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
//lcm
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
//~~~~~~~~KICHUI PARI NA~~~~~~~~~~~//
void solve()
{

}
int main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    solve();

    return 0;
}