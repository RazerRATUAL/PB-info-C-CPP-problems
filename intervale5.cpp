#include <fstream>
using namespace std;

ifstream fin("intervale5.in");
ofstream fout("intervale5.out");
const int dim = 1001;
int f[dim];
int main(){
    int x, y = -1, cnt = 0, i, j, k;
    bool exista;

    while(fin >> x){
        f[x] = 1;
        y = max(y, x);
    }

    for(int i = 0; i <= y - 2; ++i){
        for(j = i + 2; j <= y; ++j){
            exista = true;
            for(k = i + 1; k < j; ++k)
                if(f[k])
                    exista = false;
            if(exista && f[i] && f[j]){
                fout << i << ' ' << j << '\n';
                cnt++;
            }

        }
    }

    if(!cnt)
    fout << "nu exista";

    return 0;
}