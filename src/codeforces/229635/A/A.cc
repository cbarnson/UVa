// Problem #    : A
// Created on   : 2018-10-01 14:16:41
#include <bits/stdc++.h>
#define FR(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

typedef long long ll;
typedef pair<int, int> ii; 
typedef vector<int> vi;    

int main() {

   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   regex r("([aeiouy])([aeiouy])");
   string s, t, v = "aeiouy";

   cin >> n >> s;
   while (1) {
     t = regex_replace(s, r, "$1");
     if ((int)t.length() == (int)s.length()) break;
     s = t;
   }
   
   cout << s << endl;
}
