#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;
#define min(a, b) (a > b ? b : a)
#define max(a, b) (a > b ? a : b)
#define pb push_back
#define rd(t, n)                                                               \
  for (int i = 0; i < n; i++)                                                  \
    cin >> t[i];
int main() {
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    ll n, d;
    cin >> n >> d;
    ll t[n];
    ll test = 0;
    for (ll j = 0; j < n; j++) {
      cin >> t[j];
      if (t[j] > d)
        test = 1;
    }
    if (test == 0)
      cout << "YES" << '\n';
    else {
      int r = 0;
      for (ll j = 0; j < n; j++) {
        for (ll k = 0; k < n; k++) {
          r = t[j] + t[k];
          if (r <= d && k != j)
            test = 0;
        }
      }
      if (test == 0)
        cout << "YES" << '\n';
      else
        cout << "NO" << '\n';
    }
  }
}
