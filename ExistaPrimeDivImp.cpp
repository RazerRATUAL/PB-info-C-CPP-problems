#include<iostream>
using namespace std;

const int Dim = 1001;
int a[Dim];

void CitesteSir(int n, int a[]);
int Prim(int n);
int ExistaPrimeDivImp (int st, int dr);

int main()
{
    int n;
    
    cin >> n;
    
    CitesteSir(n, a);
    
    if (ExistaPrimeDivImp(1, n))
        cout << "DA";
    else
        cout << "NU";
    
}

void CitesteSir(int n, int a[])
{
    if (n == 0)
        return;
        
    CitesteSir(n - 1, a);
    
    cin >> a[n];
    
}

int Prim(int n)
{
    if (n < 2)
        return 0;
        
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}

int ExistaPrimeDivImp (int st, int dr)
{
    if (st >= dr)
        {
            if(Prim(a[st]))
                return 1;
            else
                return 0;
        }
        
    int m = (st + dr) / 2;
    
    return ExistaPrimeDivImp(st, m) || ExistaPrimeDivImp(m + 1, dr);
}



