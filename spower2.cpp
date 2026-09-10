//#include <fstream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//ifstream fin("spower2.in");
//ofstream fout("spower2.out");
//
//int const Dim = 100001;
//int a[Dim];
//int n;
//int CB(int x)
//
//int main()
//{
//    fin >> n;
//    for (int i = 0; i <= n; ++i)
//        fin >> a[i];
//    for
//    return 0;
//}
#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;

ifstream fin("spower2.in");
ofstream fout("spower2.out");

int Puteri[35], k;
int Create[35*35], nr, n, m;
int main ()

{
   fin >> n;
  for(int i = 0; i <= 30; i++)
  {
      Puteri[i + 1] = pow(2,i);
      m += 1;
  }

  for(int i = 1; i <= m; i++)
      {
          for(int j = i + 1; j <= m; j++)
          {
              Create[++k] = Puteri[i] + Puteri[j];
          }
      }

      sort(Create + 1, Create + 1 + k);
  int st , dr;
  for(int i = 1; i <= n; i++)
  {
      fin >> nr;

      if(nr == 2 || nr == 1 || nr == 0)
         {
            fout << 3 <<" ";
            continue;

         }

      for(int j = 1; j <= k; j++)

       {

         if(nr >= Create[j] && nr <= Create[j + 1])

         {

           if(nr == Create[j + 1] || nr == Create[j])
               fout << nr <<" ";
           else fout << Create[j + 1] <<" ";
             break;

         }

       }

  }

 return 0;

}
