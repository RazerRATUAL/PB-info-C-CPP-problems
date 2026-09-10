#include <iostream>
#include <cmath>

using namespace std;

const int Dim = 201;
int a[Dim];

void Cit(int &n, int a[Dim]);
void AVG(int &n, int a[Dim]);
void Afis(int n, int a[Dim]);

int main(){
    int n;
    
    Cit(n, a);
   AVG(n, a);
    Afis(n, a);

    return 0;
}

void Cit(int &n, int a[Dim]){
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void AVG(int &n, int a[Dim]){
    for (int i = 1; i < n; i++)
        if (abs(a[i]) % 2 == abs(a[i + 1]) % 2) {
            for (int j = n; j > i; j--)
            a[j + 1] = a[j];
            n++;
            a[i + 1] = (a[i] + a[i + 1]) / 2;
            i++;
        }
}

void Afis(int n, int a[Dim]) {
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}

