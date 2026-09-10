#include <bits/stdc++.h>
using namespace std;

ifstream fin("prosir.in");
ofstream fout("prosir.out");

char ch[256];

int main()
{
    fin.getline(ch , 256);
    int i = 0;
    while(ch[i]!='.')
    {
        if(((int)ch[i+1]==32 || ch[i+1]=='.') && ch[i]!=' ') 
        {
            fout << 5;
        }
        else
            fout << ch[i];
        i++;
    }
    fout << '.';
    return 0;
}