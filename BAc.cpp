#include <iostream>

using namespace std;

int main() {
  int m, n, a[20][20], i, j, k, ok;
  cin >> m >> n;
  for (i = 1; i <= m; i++) {
    for (j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }

  ok = 0;
  for (k = 1; k <= 20; k++) {
    for (i = 1; i <= m; i++) {
      if (a[i][1] == k) {
        for (j = 1; j <= m; j++) {
          if (a[j][n] == k && i != j) {
            ok = 1;
            cout << k << " ";
          }
        }
      }
    }
  }

  if (!ok) {
    cout << "nepolarizate";
  }

  return 0;
}
