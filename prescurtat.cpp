#include <iostream>
#include <cstring>
using namespace std;
char s[101];

void Prescurtat(char s[])
{
    char w[100];
    char w1[] = "COLEGIUL";
    char w2[] = "LICEUL";
    char w3[] = "NATIONAL";
    char w4[] = "TEORETIC";
    char *p = strtok(s, " ");

    w[0] = '\0';

    while (p)
    {
        if (p[strlen(p) - 1] != '.')
            strcat(w, p);
        else
        {
            p[strlen(p) - 1] = '\0';
            if (strstr(w1, p))
                strcat(w, w1);
            if (strstr(w2, p))
                strcat(w, w2);
            if (strstr(w3, p))
                strcat(w, w3);
            if (strstr(w4, p))
                strcat(w, w4);
        }

        p = strtok(NULL, " ");
        if (p)
            strcat(w, " ");
    }

    strcpy(s, w);
}

int main()
{
    cin.getline(s, 101);
    Prescurtat(s);
    cout << s;
    return 0;
}