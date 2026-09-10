#include <iostream>
using namespace std;

const int di[]={-1, 1, 0, 0};
const int dj[]={0, 0, -1, 1};
const int nr_D = 4;

int n, a[32][32], b[32][32], nr_celule = 0, cant[1001], nr_z;

void copiere_matrice(int dest[][32], int sursa[][32], int n){
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            dest[i][j] = sursa[i][j];
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
            nr_celule += a[i][j];
        }

    while(nr_celule != 0){
        cant[++nr_z] = nr_celule;
        copiere_matrice(b, a, n);
        for(int i = 2; i < n; ++i)
            for(int j = 2; j < n; ++j){
                if(a[i][j] == 1) {
                    int cnt = 0;
                    for (int d = 0; d < nr_D; ++d) {
                        int ivec = i + di[d];
                        int jvec = j + dj[d];
                        if (a[ivec][jvec] == 0)
                            cnt++;
                    }
                    if (cnt >= 2)
                        b[i][j] = 0, nr_celule--;
                }
            }
        copiere_matrice(a, b, n);
    }
    cout << nr_z << '\n';
    for(int i = 1; i <= nr_z; ++i)
        cout << cant[i] << '\n';

    return 0;
}