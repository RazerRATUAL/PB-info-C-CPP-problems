#include <iostream>
#include <cstring>

using namespace std;

bool sl(char d[], int n)
{
    int i = 0;
    while(d[i])
        i++;
    if(i == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char s[1001];
char m[1001][1001];

int main()
{
    int n;
    cin.getline(s, 101);
    cin >> n;
    int i = 0;
    int j = 0;
    int cnt = 1;
    while(s[i])
    {
        if(s[i] == ' ' && (s[i+1]!=' ' || s[i+1]!='\0'))
        {
            j = 0;
            cnt++;
        }
        else
        {
            m[cnt][j] = s[i];
            j++;
        }
        i++;
    }
    int c = 0;
    for(int i = 1; i <= cnt; ++i)
        if(sl(m[i], n))
        {
            cout << m[i] << "\n";
            c++;
        }
    if(c == 0)
        cout << "nu exista";
    return 0;
}