#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef vector<int> vi;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {

  int n = 10, m = 4;
  vi A = { 1, 3, 7, 9 };

  vector<vi> B(m, vi(m));
  REP(i, m) {
    REP(j, m) {
      B[i][j] = (A[i] * A[j]) % n;
    }
  }

  REP(i, m) {
    cout << " a^" << i << " : ";
    REP(j, m) {
      cout << setw(5) << B[i][j];
    }
    cout << endl;
  }
  cout << endl;

  
  
  // int n;
  // cin >> n;

  // vector<int> ans;
  
  // for (int i = 1; i < n; i++) {
  //   if (gcd(i, n) == 1)
  //     ans.push_back(i);
  // }

  // cout << "U(" << n << ") = {";
  // for (auto &x : ans) {
  //   cout << " " << x;
  // }
  // cout << " }, |U| = " << ans.size() << endl;

  // for (auto &x : ans) {
  //   vector<int> gen;
  //   int y = x;
  //   do {
  //     gen.push_back(y);
  //     y = (y * x) % n;
  //   } while (y != x);
    
  //   cout << "<" << x << "> = {";
  //   for (auto &y : gen) {
  //     cout << " " << y;
  //   }
  //   cout << " }" << endl;
  // }


}
