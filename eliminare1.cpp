#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string t = "";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
        if (isalpha(s[i]))
        t += s[i];

    cout << t;

    return 0;
}