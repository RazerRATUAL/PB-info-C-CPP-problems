#include <fstream>
#include <cstring>

std::ifstream fin("cuvmax.in");
std::ofstream fout("cuvmax.out");

short n;
int v[100];
char c[100][256];

int main()
{
    fin >> n;
    int i = 0;
    int max = 0, poz;
    while(i < n)
    {
        fin.getline(c[i],256);
        char s[256];
        strcpy(s , c[i]);
        char sep[] = " ";
        char *p = strtok(s, sep);
        while(p != NULL)
        {
            v[i]++;
            p = strtok(NULL, sep);
        }
        if(v[i] > max)
            max = v[i], poz = i;
        i++;
    }
    fout << c[poz];

    fin.close();
    fout.close();
    return 0;
}