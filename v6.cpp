#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream fin("bac.txt");
  int n, a, b, sum = 0, maxSum = 0;

  fin >> a;
  while (fin >> b) {
    sum = max(a, sum + a);
    maxSum = max(maxSum, sum);
    a = b;
  }

  maxSum = max(maxSum, sum + a);

  cout << maxSum << endl;

  fin.close();
  return 0;
}
