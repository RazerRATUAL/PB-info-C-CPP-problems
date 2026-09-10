#include <iostream>
using namespace std;

int kpn(int a, int b, int k);

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    cout << kpn(a,b,k);

    return 0;
}

int kpn(int a,int b,int k)
{
  int d[100005] = {0};

  for (int i = 1;i <= 100000;++i)
  {
      for (int j = 1;i * j <= 100000;++j){
        d[i * j] = d[i * j] + i;
      }
  }

  for (int i = a;i <= b;++i)
  {
      if (i % 2 == d[i] % 2)
        k--;
      if (k == 0)
        return i;
  }
  return -1;
}
