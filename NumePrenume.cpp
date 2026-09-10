#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[250] , b[250];
    cin >> a >> b;
    int i = 0;
    while(b[i]!='\0')
    {
        if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' || b[i]=='U')
        {}
        else
            cout << b[i];
        i++;    
    }
    cout << ' ';
    cout << a;
    return 0;    
}