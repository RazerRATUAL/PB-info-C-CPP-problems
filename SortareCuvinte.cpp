#include<fstream>
#include<cstring>
using namespace std;

ifstream fin("sortcuv.in");
ofstream fout("sortcuv.out");

int main()
{
    map <string,int> M;
    string s;
    while(fin >> s)
        M[s]++;
    for(auto x:M)
    {
        for(int i = 1 ; i <= x.second ; ++i)
            fout << x.first << '\n';
    }
    return 0;
}