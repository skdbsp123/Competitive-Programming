#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

ll power (ll a, ll b) {
    ll ans=1ll;
    while(b) {
        if(b&1)ans=(ans*a)%mod;
        a=(a*a)%mod;
        b=b/2;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    ll t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        cout << power(n, m) << endl;
    }
}