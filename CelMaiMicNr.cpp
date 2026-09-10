#include <iostream>
using namespace std;

int cmmnr(int n);

int main()
{
    int a;
    cin >> a;
    cout << cmmnr(a);

    return 0;
}

int cmmnr(int n)
{
    int c[11], k = 0;

    while(n)
    {
        c[++k] = n % 10;
        n /= 10;
    }
    int aux;
    for (int i = 1; i < k; ++ i)
        for(int j = i + 1; j<= k; ++j)
            if(c[i] > c[j])
            {
                aux = c[i];
                c[i] = c[j];
                c[j] = aux;
            }
        int p = 1;
        while(c[p] == 0)
            p++;
        swap(c[1], c[p]);

    for(int i = 1; i <= k; ++i)
    {
        n = n * 10 + c[i];
        c[i]++;
    }
    return n;
}
