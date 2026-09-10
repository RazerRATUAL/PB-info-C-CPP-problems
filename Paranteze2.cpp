#include <fstream>
using namespace std;

ifstream cin("paranteze2.in");
ofstream cout("paranteze2.out");

int main()
{
    char ch[300];
    cin >> ch;
    int v[300];
    int i = 0;
    int var=0;
    while(ch[i]!='\0')
    {
        if(ch[i]=='(')
            var++ , v[i]=var;
        else
            v[i]=var , var--;
        i++;
    }
    int max=0;
    for(int j = 0 ; j < i ; ++j)
        if(v[j]>max)
            max=v[j];
    cout << max;
    return 0;
}