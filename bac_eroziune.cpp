#include <iostream>
using namespace std;
int niveluri[101][101];

int main() {
  int L, C;
  cin >> L >> C;

  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      cin >> niveluri[i][j];
    }
  }

  int cn = 0;
  for (int i = 0; i < L; i++) {
    for (int j = 0; j < C; j++) {
      int nivel_minim = niveluri[i][j];
      for (int k = 0; k < 4; k++) {
        if (i + (k % 2) >= 0 && i + (k % 2) < L && j + (k / 2) >= 0 && j + (k / 2) < C) {
          if (niveluri[i + (k % 2)][j + (k / 2)] < nivel_minim) {
            nivel_minim = niveluri[i + (k % 2)][j + (k / 2)];
          }
        }
      }
      if (nivel_minim < niveluri[i][j]) {
        cn += nivel_minim - niveluri[i][j];
        niveluri[i][j] = nivel_minim;
      }
    }
  }

  cout << cn << endl;

  return 0;
}
