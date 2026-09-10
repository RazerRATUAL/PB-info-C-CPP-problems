#include <iostream>
#include <fstream>
using namespace std;

ifstream in("permutari.in");
ofstream out("permutari.out");

int n, st[10], k, as;

void init()
{
    st[k] = 0;
}

bool sol()
{
    return n==k;
}

bool valid()
{
    for(int i=1; i<k; i++)
        if(st[i]==st[k])
            return false;
    return true;
}

bool succesor() {
    if(st[k]<n)
    {
        st[k] += 1;
        return true;
    } else return false;
}

void print()
{
    for(int i=1; i<=n; i++)
        out<<st[i]<<" ";
    out<<endl;
}

void back()
{
    k = 1;
    init();
    while(k>0)
    {
        do
        {
            as = succesor();
        } while(as && valid() == false);
        if(as)
        {
            if(sol())
            {
                print();
            }
            else
            {
                k += 1;
                init();
            }
        }
        else
        {
            k -= 1;
        }
    }
}

int main()
{
    in>>n;
    back();
}