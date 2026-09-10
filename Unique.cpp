#include <iostream>
using namespace std;

const int MAX =1000000;
int fr_1[MAX], fr_2[MAX];

int main()
{
   
   int x;
   while (cin >> x)
   {
      if (fr_1[x] == 0)
         fr_1[x] = 1;
      else
         fr_2[x] = 1; 
   }

   int cnt = 0;
   for (int i = 0; i <= MAX; ++i)
      if (fr_1[i] == 1 && fr_2[i] == 0)
         cnt ++;

   cout << cnt;
}