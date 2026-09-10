#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c[11], c1[11];
    cin >> c;

    int n = strlen(c);
    strcpy(c1, c);

    for(int i = 0; i < n; ++i)
    {
        cout << c << '\n';
        c[n - i - 1] = '\0';
    }  

    for(int i = 0; i < n; ++i)
    {
        cout << c1 + i << '\n';
    }  
    return 0;
}