#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[260];
    char b[260];
    int i = 0;
    cin >> a;
    cin >> b;
    while(a[i]!='\0')
    {
        int j = 0;
        while(b[j]!='\0')
        {
            if(b[j]==a[i])
            {
                cout << a[i];
                break;
            }
            j++;
        }
        i++;
    }
    return 0;
}