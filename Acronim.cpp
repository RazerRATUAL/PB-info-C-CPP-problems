#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[1001];
    cin.getline(s , 1001);
    int i = 1;
    if(s[0]>= 'A' && s[0]<='Z')
        cout << s[0];
    while(s[i]!='\0')
    {
        if(s[i-1]==' ' && s[i]>= 'A' && s[i]<='Z')
            cout << s[i];
        i++;
    }
    return 0;
}