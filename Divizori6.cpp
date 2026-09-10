#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i + n / i;
            return 0;
        }
    }

    return 0;
}
/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> DP;
  for (int i = 1; i < n; i++) {
    if (n % i == 0) {
      DP.push_back(i);
    }
  }
  int cDP = *min_element(DP.begin(), DP.end());
  int CDP = *max_element(DP.begin(), DP.end());
  cout << cDP + CDP << endl;
  return 0;
}
*/