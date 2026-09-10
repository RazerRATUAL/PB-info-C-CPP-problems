#include <iostream>
#include <cstring>
using namespace std;
const int dim = 256;
int f[10];

int main()
{
    char s[dim];
    cin.getline(s , dim);
    int i = 0;
    while(s[i]!='\0')
    {
        if(s[i]=='0')
            f[0]++;
        if(s[i]=='1')
            f[1]++;
        if(s[i]=='2')
            f[2]++;
        if(s[i]=='3')
            f[3]++;
        if(s[i]=='4')
            f[4]++;
        if(s[i]=='5')
            f[5]++;
        if(s[i]=='6')
            f[6]++;
        if(s[i]=='7')
            f[7]++;
        if(s[i]=='8')
            f[8]++;
        if(s[i]=='9')
            f[9]++;  
        i++;  
    }
    int max=0 , val=-1;
    for(int i = 0 ; i <= 10 ; ++i)
    {
        if(f[i]>max)
            max=f[i] , val=i;
    }
    if(val==-1)
        cout << "NU";
    else
        cout << val;
}