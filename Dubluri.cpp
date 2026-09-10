#include <iostream>
#include <cstring>

using namespace std;

char s[256], c[130], r[129];
int n, nrap;

int main()
{
    cin.getline(s, 256);
    n = strlen(s)/2;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; s[j] != '\0'; j++)
        {
            strcpy(c,"");
            strncpy(c, s+j, i);

            c[i] = '\0';
            nrap = 0;

            char* p = strstr(s+j, c);

            while(p && nrap < 2)
            {
                nrap++;
                if(nrap > 1)
                {
                    if(strlen(c)>strlen(r))strncpy(r, c, i);
                    else if(strlen(c) == strlen(r) && strcmp(r, c)>0)strncpy(r, c, i);
                }
                p=strstr(p+i, c);
            }
        }
    }
    cout << r;
    return 0;
}