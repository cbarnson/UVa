#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll r, l, n;
   cin >> l >> r;

   n = r - l + 1;
   cout << "YES" << endl;
   for (ll i = 0; i < n; i += 2) {
      cout << (ll)(l + i) << " " << (ll)(l + i + 1) << endl;
   }
   
}


