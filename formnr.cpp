#include<iostream>
using namespace std;

int main()
{
    int s = 0;
    int nr = 0;
    char a[256];

    cin.getline(a, 256);

    for (int i = 0; a[i]; ++i)
    {
        if (a[i] == '0' || a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '7' || a[i] == '8' || a[i] == '9')
            nr = nr * 10 + ((int)a[i] - 48);
        else
            s += nr, nr = 0;
    }

    cout << s;

    return 0;
}
