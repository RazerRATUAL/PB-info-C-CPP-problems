#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[50] , b[50];
    cin >> a >> b;
    int i = 0;
    while(a[i]!='\0')
    {
        if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
            cout << '*';
        else if((a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u') && (b[i]!='a' || b[i]!='e' || b[i]!='i' || b[i]!='o' || b[i]!='u'))
            cout << '?';
        else if((a[i]!='a' || a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u') && (b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
            cout << '?';
        else
            cout << '#';
        i++;    
    }
    return 0;    
}