#include<iostream>
#include<fstream>
using namespace std;
ifstream in("nsir.in");
ofstream out("nsir.out");
int  v[1001], st[1010], t, n ,cnt;
void afis(int k) {
    cnt++;
    for (int i = 1; i <= k; i++)
        out << st[i] << " ";
    out << '\n';
}
void back(int k, int suma ,double suma2) {
    for (int i = 2; i <= n-suma; i++) {
        st[k] = i;
        if (st[k] >= st[k - 1] || k == 1) {
            suma += st[k];
            suma2 += double(1.0 / st[k]);
            if (suma <= n && suma2 <= 1.00001) {
                if (suma == n && suma2+ 0.00001 >= 1) afis(k);
                else back(k + 1, suma, suma2);
            }
            suma -= st[k];
            suma2 -= double(1.0 / st[k]);
        }

    }
}
int main() {
    in >> n;
    back(1, 0, 0);
    if (!cnt) out << 0;
    return 0;
}