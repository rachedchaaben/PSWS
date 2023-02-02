#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vl;

#define pb push_back
#define rd(t, n)                                                               \
  for (int i = 0; i < n; i++)                                                  \
    cin >> t[i];

int main() {
  // ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); //Faster input and output
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a + b + c) % 9 != 0)
      cout << "NO" << '\n';
    else {
      if (((a + b + c) / 9) <= min(min(a, b), c))
        cout << "YES" << '\n';
      else
        cout << "NO" << '\n';
    }
  }
}
