#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("soarece.in");
ofstream fout("soarece.out");

int solutii = 0;
int n, m, pasi = 1;
int mat[50][50];
bool mat2[50][50];
int is, js, ib, jb;

int di[4] = {-1, 0, 0, 1};
int dj[4] = {0, -1, 1, 0};

bool is_OK(int i, int j){
    if(i < 1 || j < 1 || i > n || j > m)
        return false;
    return true;
}

void Rezolvare(int i, int j){
    if(i == ib && j == jb){
        solutii++;
        return ;
    }
    for(int k = 0; k < 4; k++){
      int i_vecin = i + di[k];
      int j_vecin = j + dj[k];
      if(is_OK(i_vecin,j_vecin) && mat2[i_vecin][j_vecin] == false && mat[i_vecin][j_vecin] != -1 && mat[i_vecin][j_vecin] == 0){
        mat[i_vecin][j_vecin] = pasi++;
        mat2[i_vecin][j_vecin] = true;
        Rezolvare(i_vecin, j_vecin);
        mat2[i_vecin][j_vecin] = false;
        mat[i_vecin][j_vecin] = 0;
        pasi--;
      }
  }
}
    
    
int main(){
    fin >> n >> m;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            int x;
            fin >> x;
            if(x == 0)
                mat[i][j] = 0;
            else
                mat[i][j] = -1;
        }
    }
    
    fin >> is >> js >> ib >> jb;
    mat[is][js] = pasi;
    pasi++;
    Rezolvare(is,js);
    fout << solutii;
}