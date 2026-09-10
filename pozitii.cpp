#include<iostream>
#include<cstring>
using namespace std;

char voc[] = "aeuio";
char cons[] = "bcdfghjklmnpqrstvwxyz";
char s[300];
int cnt = 0;

int main()
{
    cin.get(s, 300);

    for (int i = 1; i < strlen(s) - 1; ++i)
        if (strchr(cons, s[i - 1]) && strchr(voc, s[i]) && strchr(cons, s[i + 1]))
                cnt++;

    cout << cnt;
}

