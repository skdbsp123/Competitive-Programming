/* *>>>>>Anshit_Bhardwaj<<<<<* */
#include <bits/stdc++.h>
#define ll long long
#define f(i, x, n) for(int i = x; i < n; i++)
#define dbg(x) cout << x << endl
#define dbg2(x, y) cout << x << ' ' << y << endl
#define dbg3(x, y, z) cout << x << ' ' << y << ' ' << z << endl
#define mod 1000000007
using namespace std;

char firstNotRepeatingCharacter(std::string s) {
    vector<int> freq(26, 0);
    for(char c : s){
        freq[c-'a']++;
    }
    for(char c : s){
        if(freq[c-'a'] == 1){
            return c;
        }
    }
    return '_';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T, n;
    cin >> T;
    while(T--){
        cin >> n;
        
    }
}