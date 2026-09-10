#include <iostream>
#include <cstring>
 
using namespace std;
char aux[1001];
int main ()
{
    char x[10001], semn[] = ".,!?";
    int n, c;
    cin >> n;
    cin.get();/// citim enter
    for( int i = 1; i <= n; ++i)
    {
        cin.getline(x, 256);
        for( int j = 0; x[j]; ++j)
            if( x[j + 1] != '\0')
                if(strchr( semn, x[j]) )
                {
                    strcpy( aux, x + j + 1);
                    strcpy( x + j, aux);
                    j--;
                }
        cout << x << '\n';
 
    }
 
}