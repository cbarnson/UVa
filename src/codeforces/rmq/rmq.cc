#include <bits/stdc++.h>
using namespace std;

class RMQ {
public:
   vector<int> A;

   // M[i][j] is index of min in range from A[i] to A[i + (1 << j) - 1]
   vector<vector<int>> M;
   RMQ(const vector<int> &_A) {
      A = _A;
      int n = A.size();
      // int m = (int)(log2(n) + 1);

      int m = 31 - __builtin_clz(n) + 1;
      // assert(x == m);
      
      // cout << "log2(" << n << ") = " << (int)log2(n) << endl;
      M.assign(n, vector<int>(m, 0));
      for (int i = 0; i < n; i++) M[i][0] = i;

      for (int j = 1; (1 << j) <= n; j++) {
      	 for (int i = 0; (i + (1 << j) - 1) < n; i++) {
      	    M[i][j] = (A[M[i][j - 1]] <= A[M[i + (1 << (j - 1))][j - 1]])
      	       ? M[i][j - 1]
      	       : M[i + (1 << (j - 1))][j - 1];
      	 }
      }

      // print
      cout << "----------" << endl;
      for (int i = 0; i < n; i++) {
	 for (int j = 0; j < m; j++) {
	    cout << M[i][j] << " ";
	 }
	 cout << endl;
      }
      cout << "----------" << endl;
   }

   int query(int L, int R) {
      int k = 31 - __builtin_clz(R - L + 1);
      return (A[M[L][k]] <= A[M[R - (1 << k) + 1][k]])
      	 ? M[L][k]
      	 : M[R - (1 << k) + 1][k];
   }

};

int main() {

   int n;
   cin >> n;

   vector<int> A(n);
   for (auto &i : A) cin >> i;

   RMQ X(A);   

   cout << "====== QUERY =========" << endl << "    ";
   for (int i = 0; i < n; i++) {
      cout << i << " ";
   }
   cout << endl << "--------------------" << endl;
   for (int i = 0; i < n; i++) {
      cout << i << " | ";
      for (int j = 0; j < n; j++) {
	 if (j < i)
	    cout << "  ";
	 else 
	    cout << X.query(i, j) << " ";
      }
      cout << endl;
   }
   cout << "===============" << endl;
   
   vector<int> ans(n);
   for (int L = 0; L < n; L++) {
      int skip = 1;
      if (n > 10000) skip = (rand() & 15) + 1;
      for (int R = L; R < n; R += skip) {
	 int q = X.query(L, R);
	 cout << "query(" << L << ", " << R << ") = " << q << endl;	 
	 ans[L] += (ans[L] >> 5) ^ (ans[L] << 4) ^ q;
      }
   }
   for (int i = 0; i < n; i++) {
      cout << (i ? " " : "") << ans[i];
   }
   cout << endl;

}
