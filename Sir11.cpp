#include <fstream>

using namespace std;
ifstream fin ("sir11.in");
ofstream fout ("sir11.out");

void afisareSir(int n);

int main()
{
    int n;
    fin >> n;
    afisareSir(n);
    return 0;
}

void afisareSir(int n){
    int f1 = 1, f2 = -1, f3;
    for (int i = 3; i <= n; ++i) {
        f3 = 1 - 2 * f2 - f1;
        if(i != n)
            f1 = f2, f2 = f3;
    }
    for (int i = n; i >= 3; --i) {
        fout << f3 << ' ';
        f1 = 1 - 2 * f2 - f3;
        f3 = f2, f2 = f1;
    }
    fout << -1 << ' ' << 1;
}
