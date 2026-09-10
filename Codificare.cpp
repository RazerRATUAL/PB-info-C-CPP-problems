#include <iostream>
#include <cstring>
 
using namespace std;

void Adin(char *x, char ch);
void Adsf(char *x, char ch);

int main()
{
    char c1[256], c2[256], cuv[256];
    int cif;
    cin >> c1 >> c2;
    if(strlen(c1) != strlen(c2))
        cout << "cod incorect";
    else
    {
        cuv[0] = c1[0];
        for(int i = 1; c2[i]; ++i)
        {
            cif = c2[i] - '0';
            if (cif % 2 == 0)
            Adin(cuv, c1[i]);
            else
                Adsf(cuv, c1[i]);
        } 
        cout << cuv;
    }
    return 0;
}

void Adin(char *x, char ch)
{
    char aux[101] = "";
    strcpy(aux, x);
    x[0] = ch;
    strcpy(x + 1, aux);
}
void Adsf(char *x, char ch)
{
    int l = strlen(x);
    x[l] = ch;
    x[l + 1] = nullptr;
}