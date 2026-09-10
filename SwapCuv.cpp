#include <iostream>
#include <cstring>
using namespace std;

char s[260], m[256][256];
int n;

bool FPC(char Lit){
    if (('a' <= Lit && Lit <= 'z') || ('A' <= Lit && Lit <= 'Z') ) 
        return true;
    return false;
}

int main()
{
    int i, j;
    cin.getline(s, 256);
    for (i = 0; i < strlen(s); ++i)
        if (FPC(s[i]))
        {
            n++;
            j = 0;
            while (FPC(s[i]))
                m[n][j++] = s[i++];
            m[n][j] = 0;
        }

    int p = 1, u = n;
    while (p < u){
        cout << m[p] << endl << m[u] << endl;
        p++;
        u--;
    }
    if (p == u) cout << m[p] << endl;
    return 0;
}