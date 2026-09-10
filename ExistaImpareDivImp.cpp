#include <iostream>
using namespace std;

bool Verificare(int st, int dr);

const int Dim = 1001;
int a[Dim];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    if(Verificare(1, n))
        cout << "DA";
    else 
        cout << "NU";
    
    return 0;  
}

bool Verificare(int st, int dr)
{
    if(st == dr)
    {
         if (a[st] % 2 == 1) return true;
    else return false;
    }
    int m = (st + dr) / 2;
    return Verificare(st, m) || Verificare(m + 1, dr);
}