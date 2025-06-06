/* #region  */
#include <bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include <chrono>
#endif

/* clang-format off */
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);

#define int int64_t

/* TYPES  */
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define si set<int>
#define sc set<char>

/* FUNCTIONS */
#define fin(i,s,e) for(int i=s;i<e;i++)
#define cfin(i,s,e) for(int i=s;i<=e;i++)
#define rfin(i,e,s) for(int i=e-1;i>=s;i--)
#define pb push_back
#define eb emplace_back

/* PRINTS */
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "}\n"; }

/* UTILS */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
int min(int a,int b) { if (a<b) return a; return b; }
int max(int a,int b) { if (a>b) return a; return b; }
int gcd(int a,int b) { if (b==0) return a; return gcd(b, a%b); }
int lcm(int a,int b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(int a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
/* clang-format on */
/* #endregion */

void solve() {
  // code goes here
}

int32_t main() {
  FAST;
#ifdef LOCAL
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif

#ifdef LOCAL
  std::chrono::time_point<std::chrono::system_clock> start, end;
  start = std::chrono::system_clock::now();
#endif
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
#ifdef LOCAL
  end = std::chrono::system_clock::now();
  std::chrono::duration<double> elapsed_seconds = end - start;
  cout << "\n------\nTime Taken: " << elapsed_seconds.count() << '\n';
#endif
  return 0;
}
