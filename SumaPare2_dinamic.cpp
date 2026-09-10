#include <iostream>
using namespace std;
int main()
{
    int n , m , s = 0;
    cin >> n >> m;
    int* *a = new int* [n + 1]; 

    for (int i = 0; i <= n; ++i) 
        a[i] = new int[m + 1];   

    for (int i = 1; i <= n; ++i)
           for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ;++j)
            if(a[i][j] % 2 == 0)
                s = s + a[i][j];
    cout << s;
    
     for (int i = 0; i <= n; ++i) 
        delete[] a[i];         

    delete[] a;                

    return 0;  
}

