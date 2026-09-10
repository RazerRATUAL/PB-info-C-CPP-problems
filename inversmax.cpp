#include <iostream>
#include <cstring>
using namespace std;

//ifstream fin("palindrom.in");
//ofstream fout("palindrom.out");

int main()
{
    char s[256];
    bool ok;
    int lmax = 0, j, q, l;
    cin.getline(s, 256);

    for(int i = 0; s[i]; ++i)
    {
        if(s[i] != ' ')
        {
            j = i;
            ok = false;
            while(s[j] && s[j] != ' ')
            {
                if(isalpha(s[j])) //daca e litera
                    ok = true;
                j++;
            }

            l = j - i;
            if(ok && l > lmax)
                lmax = l;
            i = j - 1;
        }
    }

    for(int i = 0; s[i]; ++i)
    {
        if(s[i] != ' ')
        {
            j = i;
            ok = false;
            while(s[j] && s[j] != ' ')
            {
                if(isalpha(s[j])) //daca e litera
                    ok = true;
                j++;
            }

            l = j - i;
            if(ok && l == lmax) //dc cuv are lungime maxima
            {
                q = j - 1; //ultimul indice din cuvant
                for(int k = i; k < q; ++k, q--)
                    swap(s[k], s[q]);
            }
            i = j - 1;
        }
    }

    cout << s;

    return 0;
}