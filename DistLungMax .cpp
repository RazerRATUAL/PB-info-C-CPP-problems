#include <iostream>
#include <cstring>
using namespace std;

bool VerifCuv(char s[256]);

int main()
{
    char s[256], lungmax[256];
    cin.getline(s, 256);

    char *p = strtok(s, " ");
    bool ok = false;

    while(p)
    {
        if(VerifCuv(p))
        {
            ok = true;

            if(strlen(p) > strlen(lungmax))
                strcpy(lungmax, p);
        }
        
        p = strtok(nullptr, " ");
    }

    if(ok)
        cout << lungmax;
    else
        cout << -1;

    return 0;
}

bool VerifCuv(char s[256])
{
    int f[200] = {0};

    for(int i = 0; s[i]; ++i)
    {
        ++f[(int)s[i]];

        if(f[(int)s[i]] > 1)
            return false;
    }

    return true;
}