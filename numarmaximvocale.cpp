#include<fstream>
#include<cstring>
using namespace std;

ifstream fin("vocmax.in");
ofstream fout("vocmax.out");

int main()
{
    int n;
    fin >> n;
    
    int maxi = 0;
    int poz = 0;
    
    char a[101][255];
    
    for(int i = 0; i <= n; ++i)
        {
            fin.getline(a[i], 255);
            int cnt = 0;
            int j = 0;
            while(a[i][j] != '\0')
            {
                if (strchr("aeiou",  a[i][j]))
                cnt++;
            j++;
            }
            
            if (cnt > maxi)
            maxi = cnt, poz = i;
        }
        
        int j = 0;
        while(a[poz][j] != '\0'){
            fout << a[poz][j];
            j++;
        }
    
    return 0;
}