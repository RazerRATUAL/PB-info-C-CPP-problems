#include <fstream>
#include <vector>
#include <list>
#include <algorithm>
#include <map>

using namespace std;
ifstream fin ("entries.in");
ofstream fout ("entries.out");

const int nMAX = 5e3;
struct query {
   int op, x, y;
};

int n;
map<int, int> meaning;   int k;
int tat[2*nMAX + 1];
int cnc[2*nMAX + 1]; 
query Qu[nMAX + 1];

int Radacina(int nod);
void Drumuri(int x);
void Muta(int x, int y);
void Afisare();
void Citire();
void Entries();

int main(){
   Citire;
   Entries;
   }


void Entries(){
    for (int i = 1; i <= n; ++i)
   {
      if (Qu[i].op == 1)
      {
         int radx = Radacina(Qu[i].x);
         int rady = Radacina(Qu[i].y);

         if (radx == rady)
            continue;

         if (cnc[radx] > cnc[rady])
            swap(radx, rady),
            swap(Qu[i].x, Qu[i].y);

         Muta(Qu[i].x, Qu[i].y);
      }
}
    Afisare;
}

void Citire(){
fin >> n;

   for (int i = 1; i <= 2*n; ++i)
      cnc[i] = 1;

   for (int i = 1; i <= n; ++i)
   {
      fin >> Qu[i].x >> Qu[i].y >> Qu[i].op;

      if (meaning[Qu[i].x] == 0)
         meaning[Qu[i].x] = ++k;
      Qu[i].x = meaning[Qu[i].x];

      if (meaning[Qu[i].y] == 0)
         meaning[Qu[i].y] = ++k;
      Qu[i].y = meaning[Qu[i].y];
   }
}
void Afisare(){
    for(int i = 1; i <= n; ++i)
    {
if (Qu[i].op == 2)
      {
         Drumuri(Qu[i].x);
         Drumuri(Qu[i].y);

         fout << (Radacina(Qu[i].x) == Radacina(Qu[i].y) ? "1\n" : "0\n");
      }
    }
}

int Radacina(int nod){
   if (tat[nod])
      return Radacina(tat[nod]);
   return nod;
}

void Muta(int x, int y){
   int radx = Radacina(x);
   int rady = Radacina(y);
   cnc[rady] += cnc[radx];

   while (x)
   {
      int tatx = tat[x];
      tat[x] = rady;
      x = tatx;
   }
}

void Drumuri(int x){
   int radx = Radacina(x);

   while (tat[x])
   {
      int tatx = tat[x];
      tat[x] = radx;
      x = tatx;
   }
}