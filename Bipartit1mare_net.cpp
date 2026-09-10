#include <fstream>
#include <iostream>
using namespace std;
ifstream fin("bipartit1mare.in");
ofstream fout("bipartit1mare.out");

int n, m, i, j, x;
int a[1001][1001];
int c[1001];          // coada in care tin nodurile in ordinea vizitarii lor
int cul[1001];        // marchez daca am vizitat un nod; cand il vizitez il colorez cu 1 si -1

bool BFS( int start, int culoare ){                             // pornim parcurgerea de la un nod dat
  int i = 1;
  int vf = 0;
  cul[start] = culoare; //**                   // marchez ca vizitat nodul start
  c[++vf] = start;                             // punem in coada nodul de la care pornim
  while( i <= vf ){                            // cata vreme mai am elemente in coada
    int nod = c[i];                            // nodul curent
    //out << nod << " ";                       // afisez nodul curent
    for(int vecin = 1; vecin <= n; vecin++ )   // parcurg toti vecinii nodului curent
      if( a[nod][vecin] == 1 )
         if( cul[vecin] == 0 ){                // daca nu e colorat
            cul[vecin] = -cul[nod]; //**       // colorez diferit fata de nod
            c[++vf] = vecin;                   // ii pun in coada
         }
      else if( cul[vecin] == cul[nod] ) //**   // daca am dat de un vexin deja colorat cu aceeasi culoare cu nod
        return 0;                              // graful nu e bipartit
    i++;                                       // trec la urmatorul element din coada
  }
  return 1;
}

int main(){
  fin >> n >> m ;
  for( int l = 1; l <= m; l++ ){
    fin >> i >> j;
    a[i][j] = a[j][i] = 1;
  }
  int p = 1;                    
  for( int i = 1; i <= n; i++ )
    if ( cul[i] == 0 && p )
      p = (p && BFS( i, 1 ));         // apelam bfs pentru fiecare componenta conexa
  if( p ){                            // daca toate componentele au putut fi colorate
    fout << "DA\n";                   // graful e bipartit
    for( int i = 1; i <= n; i++ )     // afisam nodurile colorate cu 1 ( prima multime )
      if ( cul[i] == 1 )
        fout << i << " ";
    fout << "\n";
    for( int i = 1; i <= n; i++ )     // afisam nodurile colorate cu -1 
      if ( cul[i] == -1 )
        fout << i << " ";
  }
  else
    fout << "NU";
  return 0;
}