#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a, b;

    getline(cin, a);
    getline(cin, b);

    for (size_t i = 0; i < a.length(); ++i)
    {
        for (size_t j = 0; j < b.length(); ++j)
        {
            if (a[i] == b[j])
            {
                cout << a[i];
                break;
            }

        }
    }
    return 0;
}