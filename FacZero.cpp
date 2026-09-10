#include <iostream>

int Zero(int n)
{
  int zerouri = 0;
  for (int d = 5; d <= n; d *= 5)
     zerouri += n/d;
  
  return zerouri;
}

int main()
{
  int n;
  std::cin >> n;

  std::cout << Zero(n);

  return 0;
}