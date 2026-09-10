#include <iostream>
#include <cmath>

using namespace std;

const int Dim = 1e5;
int n;
int a[Dim];

void Cit(int &n, int a[Dim]);
int main(){
    Cit(n, a);

    bool gata = false;
    while (!gata)
    {
        for (int i = 1; i <= n; ++i)
            cout << a[i] << ' ';
        cout << '\n';
        gata = true;
        for (int i = 1; i < n; ++i)
            if ( a[i] != a[i + 1] && (abs(a[i]) % 2 == abs(a[i + 1]) % 2))
            {
                for (int j = n; j > i; --j)
                    a[j + 1] = a[j];
                n++;
                a[i + 1] = (a[i] + a[i + 1]) / 2;
                i++;
                gata = false;
            }
    }
    return 0;
}

void Cit(int &n, int a[Dim]){
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}