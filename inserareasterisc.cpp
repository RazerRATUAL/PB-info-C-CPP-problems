#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int cnt = 0;

int main()
{
    char a[101];

    cin.getline(a, 100);

    for (int i = 0; a[i] != '\0'; ++i)
        if (a[i] == 'e' || a[i] == 'a' || a[i] == 'u' || a[i] == 'i' || a[i] == 'o')
        cnt++;

    if (cnt == 0)
        cout << "FARA VOCALE";
    else
    {
        for (int i = 0; a[i] != '\0'; ++i)
            if (a[i] == 'e' || a[i] == 'a' || a[i] == 'u' || a[i] == 'i' || a[i] == 'o')
            cout << a[i] << '*';
        else
            cout << a[i];
    }
}