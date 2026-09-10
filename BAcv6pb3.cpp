#include <iostream>
#include <fstream>

using namespace std;
ofstream fout("bac.out");
int main() {
  int p1, p2, i, j, k, x, y;
  cin >> p1 >> p2;


  for (i = 9; i >= 2; i--) {
    for (j = 9; j >= 2; j--) {
      if (i * j == p1) {
        for (k = 9; k >= 2; k--) {
          for (x = 9; x >= 2; x--) {
            if (x * y == p2) {
              fout << i << j << k << k << k << x << y << endl;
            }
          }
        }
      }
    }
  }

  fout.close();
  return 0;
}
