#include <fstream>
#include <cstring>

using namespace std;
int main()
{
   ifstream fin("pbinfo.in");
   ofstream fout("pbinfo.out");
    int ind;
    bool gata = false;
    char cuv[101], m[21][101], link[101];
    char sep[] = ",.!?/:";
    char *p;
    fin.getline(link, 101);
    fin >> ind;
    for( int i = 1; i <= ind; ++i)
    {
        fin >> m[i];
    }

    p = strtok(link, sep);
    while( p && !gata)
    {
        strcpy( cuv, p);
        if( strcmp(cuv, "virus") == 0)
        {
            gata = true;
        }
        for( int i = 1; i <= ind; ++i)
            if( strcmp(m[i], cuv) == 0)
            {
                gata = true;
                break;
            }
        p = strtok( NULL, sep);
    }
    if( !gata) fout << "NU";
    else fout << "DA";
}