#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[256];
    
    cin.getline(a, 256);
    
    for (int i = 0; a[i]; ++i)
        {
            a[0] = toupper(a[0]);
            
            if (a[i] == ' ')
                a[i + 1] = toupper(a[i + 1]);
                
            if (a[i + 1] == ' ')
                a[i] = toupper(a[i]);
                
            if (a[i + 1] == '\0')
                a[i] = toupper(a[i]);
                
            cout << a[i];
        }
    return 0;
}
