#include <iostream>
#include <cstring>
using namespace std;

char s[256] , m[100][100];

int main()
{
    cin.getline(s , 256);
    int i = 0 , j = 0 , cnt = 0;
    while(s[i]!='\0')
    {
        if(s[i] == ' ')
        {
            cnt++;
            j = 0;
        }
        else
            m[cnt][j]=s[i] , j++;
        i++;
    }
    for(int i = 0 ; i <= cnt ; ++i)
    {
        cout << m[i] << ' ';
        for(int j = strlen(m[i]) - 1 ; j >= 0 ; --j)
            cout << m[i][j];
        cout << ' ';
    }
    return 0;
}