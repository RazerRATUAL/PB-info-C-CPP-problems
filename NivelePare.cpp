#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream fin ("nivelepare.in");
ofstream fout ("nivelepare.out");

const int nMAX = 100;

int n;
int tat[nMAX + 1];
vector<int> fii[nMAX + 1];
vector<int> noduriPeNivele[nMAX + 1];

void DFS(int nod, int niv);

int main(){
   fin >> n;
   for (int i = 1; i <= n; ++i){
      fin >> tat[i];
      fii[tat[i]].push_back(i);
   }

   DFS(fii[0][0], 0); 

   for (int i = 0; !noduriPeNivele[i].empty(); i += 2){
      sort(noduriPeNivele[i].begin(), noduriPeNivele[i].end());
      for (int nod : noduriPeNivele[i])
         fout << nod << ' ';
      fout << '\n';
   }
}

void DFS(int nod, int niv){
       noduriPeNivele[niv].push_back(nod);

   for (int fiu : fii[nod])
      DFS(fiu, niv+1);
}