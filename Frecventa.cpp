#include <iostream>
#include <cstring>
using namespace std;

int f[37];

int main()
{
    char ch[300];
    cin.getline(ch , 300);
    int i = 0;
    while(ch[i]!='\0')
    {
        if(ch[i]!=' ')
        {
            f[(int)ch[i]]++;
        }
        i++;    
    }
    int max=0 , val=0;
    for(int i = 50 ; i <= 300 ; ++i)
    {
        if(f[i] > max)
            max=f[i] , val=i;
    }
    if(val<97)
        val+=32;
        cout << (char) val;
}