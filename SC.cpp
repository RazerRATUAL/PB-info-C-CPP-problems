#include <iostream>
using namespace std;

int SC(char s[]);

int main()
{
    char s;
    cin >> s;
    cout << SC(s);
}

int SC(char s[])
{
    if (s[0] == 0)
        return 0;

    if(s[0] >= '0' && s[0] <= '9')
        return s[0] = '0' + SC(s + 1);
    return SC(s + 1);
}
