/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        int x, m;
        cin >> x >> m;
        int a, b;
        int l = x, h = x;
        f(i, 0, m){
            cin >> a >> b;
            if(a < l && b >= l){
                l = a;
            }
            if(b > h && a <= h){
                h = b;
            }
        }
        cout << h - l + 1 << endl;
    }
}