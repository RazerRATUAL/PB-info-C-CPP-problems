#include<fstream>
using namespace std;

ifstream fin("paritatesiruri.in");
ofstream fout("paritatesiruri.out");

int main()
{
    int n;
    
    fin >> n;


    for (int f = 1; f <= n; ++f)
        {
            char a[10001];
            fin >> a;
            int i = 1;
            
            while(a[i] != '\0')
            {
                if (i % 2 == 1)
                fout << a[i];
                i++;
            }
            
            i = 0;
            fout << ' ';
            
            while(a[i] != '\0')
            {
                if (i % 2 == 0)
                fout << a[i];
                i++;    
            }
            fout << '\n';
            
        }
    
    return 0;
}