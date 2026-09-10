#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    char voc[] = "AEIOU";
    int f[11] = {0}, maxim = 0, ind = 0, poz;
    char *p; //pointer spre char!
    cin.getline(s, 256);
    for(int i = 0; s[i]; ++i)
        if(s[i] >= 'a' && s[i] <= 'z')
           s[i] -= 32;

    for(int i = 0; s[i]; ++i)
    {
        p = strchr(voc, s[i]);
        if(p)
        {
            ind = p - voc;
            f[ind]++;
            if(f[ind] > maxim)
            {
                poz = ind;
                maxim = f[ind];
            } 
        }
    }
    cout << voc[poz];
return 0;
}