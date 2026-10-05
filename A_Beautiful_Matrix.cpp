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

int matrix[6][6];

int Frow = 0;
int Fcol = 0;

for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        cin >> matrix[i][j];
        if(matrix[i][j] == 1){
            Frow = i;
            Fcol = j;
        }
    }
}

  cout << abs(3-Fcol) + abs(3-Frow);

}

int main() {
    fastio();
        solve();
    return 0;
};