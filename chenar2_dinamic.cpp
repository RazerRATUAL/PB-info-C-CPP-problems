#include <iostream>
using namespace std;

int main()
{
    int n, m, x;
    cin >> n >> m;
    int* *a = new int* [n + 1]; 

    for (int i = 0; i <= n; ++i) 
        a[i] = new int[m + 1];   

    for (int i = 1; i <= n; ++i)
           for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
        
    cin >> x;
    
    bool gasit = false;
    
            
    for (int j = 1; j < m && !gasit; ++j)
        if (a[1][j] == x)
            gasit = true;
    
    for (int i = 1; i < n && !gasit; ++i)
        if (a[i][m] == x)
            gasit = true;
    
    for (int j = m; j > 1 && !gasit; --j)
        if (a[n][j] == x)
            gasit = true;
            
    for (int i = n; i > 1 && !gasit; --i)
        if (a[i][1] == x)
            gasit = true;
            
    if (gasit)
        cout << "DA";
    else
        cout << "NU";

    for (int i = 0; i <= n; ++i) 
        delete[] a[i];         

    delete[] a;                

    return 0;  
}