#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
using namespace std;

// ─── Type Aliases ───────────────────────────────────────────
typedef long long       ll;
typedef pair<int,int>   pii;
typedef pair<ll,ll>     pll;
typedef vector<int>     vi;
typedef vector<ll>      vll;
typedef vector<pii>     vpii;

// ─── Macros ─────────────────────────────────────────────────
#define pb          push_back
#define mp          make_pair
#define fi          first
#define se          second
#define all(x)      (x).begin(), (x).end()
#define rall(x)     (x).rbegin(), (x).rend()
#define sz(x)       (int)(x).size()
#define rep(i,a,b)  for(int i = (a); i < (b); i++)
#define endl        '\n'

// ─── Constants ──────────────────────────────────────────────
const int  MOD  = 1e9 + 7;
const int  INF  = 1e9;
const ll   LINF = 1e18;
const double PI = acos(-1.0);

// ─── Debug (only active locally) ────────────────────────────
#ifdef LOCAL
    #define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
    #define dbg(x)
#endif

// ─── Fast I/O ───────────────────────────────────────────────
void fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

// ─── Solution ───────────────────────────────────────────────
void solve() {

     string val;
     cin >> val;

     int one = 0;
     int zero = 0;


     for(int i = 0; i < val.size(); i++){

         if(val[i] == '1'){
            one++;
             zero = 0;
         }
         else{
            zero++;
              one = 0;
         }

         if(one >= 7 || zero >= 7){
            cout<<"YES\n";
            return;
         }

     }
     cout<<"NO\n";



}

int main() {
    fastio();
        solve();
    return 0;
}
