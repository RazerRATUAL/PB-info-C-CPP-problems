#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[256];
    char aux[256];
    cin.getline(s, 256);

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] == s[i + 1] || toupper(s[i]) == s[i + 1] || s[i] == toupper(s[i + 1]))
        {
            int cnt = 1;
            while(s[i] == s[i + 1] || toupper(s[i]) == s[i + 1] || s[i] == toupper(s[i + 1]))
            {
                cnt++;
                i++;
            }
            strcpy(aux, s + i + 1);
            strcpy(s + i - cnt + 1, aux);
            i = -1;
        }
    }

    cout << s;

    return 0;
}