#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << "  " << y << endl
#define dbg3(x, y, z) cout << x << "  " << y << "  " << z << endl
#define mod 1000000007
using namespace std;

string defangIPaddr(string address) {
    string s;
    for(char c : address){
        if(c == '.'){
            s.push_back('[');
            s.push_back('.');
            s.push_back(']');
        }else{
            s.push_back(c);
        }
    }
    return s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
    }
}