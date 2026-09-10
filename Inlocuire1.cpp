#include <iostream>
#include <cstring>
using namespace std;

char s[256][256];

int main()
{
    char a[256];
    cin.getline(a, 256);

    int i = 0;
    int cnt = 1, j = 0;
    while(a[i] != '\0')
    {
        if(a[i] != ' ')
        {
            s[cnt][j] = a[i];
            j++;
        }
        else
        {
            cnt++;
            j = 0;
        }
        i++;
    }

    for(int i = 1; i <= cnt; ++i)
    {
        if(strlen(s[i]) != 3)
            cout << s[i] << ' ';
        else
            cout << '*' << ' ';
    }

    return 0;
}