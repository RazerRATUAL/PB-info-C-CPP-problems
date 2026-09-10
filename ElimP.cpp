#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int l;
    cin >> l;
    char s[300];
    cin >> s;
    int n = strlen(s);
    for(int i = 0 ; i <= n-l ; ++i)
    {
        for(int j = 0 ; j < n ; ++j)
            if(j < i || j >= i + l)
                cout << s[j];
        cout << endl;
    }
}