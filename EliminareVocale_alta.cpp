#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string a = "a";
    string e = "e";
    string z = "i";
    string o = "o";
    string u = "u";
    cin >> s;

    size_t i= s.find(a);
    while(i != string::npos)
    {
        s.erase(i);
        i = s.find(a, i);
    }
    size_t i2= s.find(e);
    while(i2 != string::npos)
    {
        s.erase(i2);
        i2 = s.find(e, i2);
    }
    
    size_t i3= s.find(z);
    while(i3 != string::npos)
    {
        s.erase(i3);
        i3 = s.find(z, i3);
    }
    
    size_t i4= s.find(o);
    while(i4 != string::npos)
    {
        s.erase(i4);
        i4 = s.find(o, i4);
    }
    
    size_t i5= s.find(u);
    while(i5 != string::npos)
    {
        s.erase(i5);
        i5 = s.find(u, i5);
    }

    cout << s;
}