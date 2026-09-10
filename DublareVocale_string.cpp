#include <string>
#include <iostream>
using namespace std;

int main()
{
    string s;
    
    getline(cin, s);
    
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
        s[i] == 'o' || s[i] == 'u')
            cout << s[i] << s[i];
        else
            cout << s[i];
    }
    
    return 0;
}
