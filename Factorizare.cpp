#include <iostream>

int main()
{
   int n, b, pow;
   std::cin >> n;

   for (b = 2; b*b <= n; ++b)
   {
      pow = 0;
      while (n % b == 0)
      {
         pow ++;
         n /= b;
      }
      
      if (pow != 0)
         std::cout << b << ' ' << pow << '\n';
   }

   if (n != 1)
      std::cout << n << " 1";
   
   return 0;
}