#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[256];
    int cnt = 0;

    cin.getline(a, 256);

    for (int i = 0; a[i]; ++i)
    {
        if (strchr("aeiou", a[i]) && strchr("aeiou", a[i + 1]))
            cnt++;
    }

    cout << cnt - 1;
    return 0;
}
