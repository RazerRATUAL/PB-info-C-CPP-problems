#include <iostream>
#include <cstrimg>
using namespace std;

char m[260][260];

bool voc(char ch)
{
    return ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'I' || ch == 'i' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U';
}

int nrvoc(char s[])
{
    int i = 0;
    int cnt = 0;
    while(s[i])
    {
        if(voc(s[i]))
            cnt++;
        i++;
    }
    return cnt;
}

int main()
{
    char s[256];
    cin.getline(s , 300);
    int i = 0 , cnt = 1 , j = 0;
    while(s[i]!='\0')
    {
        if(s[i]!=' ')
        {
            m[cnt][j]=s[i];
            j++;
        }
        if(s[i]==' ' && s[i+1]!=' ')
            cnt++ , j=0;
        i++;
    }
    int v[101];
    for(int i = 1 ; i <= cnt ; ++i)
        v[i]=nrvoc(m[i]);
    for(int i = 1 ; i <= cnt ; ++i)
        for(int j = i + 1 ; j <= cnt ; ++j)
            if(v[j] > v[i])
                swap(m[j] , m[i]) , swap(v[j] , v[i]);
    for(int i = 1 ; i <= cnt ; ++i)
        for(int j = i + 1 ; j <= cnt ; ++j)
            if(strlen(m[j]) > strlen(m[i]) && v[j]==v[i])
                swap(m[j] , m[i]);
    for(int i = 1 ; i <= cnt ; ++i)
        for(int j = i + 1 ; j <= cnt ; ++j)
            if(v[i] == v[j] && strlen(m[i]) == strlen(m[j]) && strcmp(m[i] , m[j])==1)
                swap(m[j] , m[i]);
    for(int i = 1 ; i <= cnt ; ++i)
        cout << m[i] << endl;
    return 0;
}