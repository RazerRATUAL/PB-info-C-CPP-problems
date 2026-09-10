#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
   char s[101], *cuv;
   bool exista;
   cin.getline(s, 101);


   exista = false;
   cuv = strtok(s, " ");
   while (cuv)
   {
      if (strstr(cuv, "DO") || strstr(cuv, "RE") || strstr(cuv, "MI") || strstr(cuv, "FA") ||
          strstr(cuv, "SOL") || strstr(cuv, "LA") || strstr(cuv, "SI") )
      {
         cout << cuv << '\n';
         exista = true;
      }
      cuv = strtok(NULL, " ");
   }

   if (!exista)
      cout << "nu exista";
   return 0;
}