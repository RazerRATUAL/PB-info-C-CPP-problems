#include <fstream>
using namespace std;
ifstream in("partitiinumar2.in");
ofstream out("partitiinumar2.out");

int a[40];
void PN2(int n, int m, int c, int sum, int a[], int poz) {
    if (sum == n && poz >= m) {
        for (int i = 0; i < poz; ++i) {
            out<< a[i] << " ";
        }
        out << endl;
        return;
    }
    for (int i = c; i <= n - sum; ++i) {
        a[poz] = i;
        PN2(n, m, i + 1, sum + i, a, poz + 1);
    }
}

int main() {
    int n, m;

    in >> n >> m;

    PN2(n, m, 1, 0, a, 0);
    return 0;
}
