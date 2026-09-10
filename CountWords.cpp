#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[10001], cuv[10001][101], *p, sep[] = " .,?!";
    int contor = 0;
    cin.getline(s, 10001);
    p = strtok(s, sep);
    while (p != NULL)
    {
        strcpy(cuv[contor++], p);
        p = strtok(NULL, sep);
    }
    for (int i = 0; i < contor - 1; i++)
        for (int j = i + 1; j < contor; j++)
            if (strcmp(cuv[i], cuv[j]) > 0)
                swap(cuv[i], cuv[j]);

    int cnt = 1;
    for (int i = 0; i < contor; i++)
    {
        if (strcmp(cuv[i], cuv[i + 1]) == 0)
            cnt++;
        else
        {
            cout << cuv[i] << ' ' << cnt << endl;
            cnt = 1;
        }
    }
    return 0;
}