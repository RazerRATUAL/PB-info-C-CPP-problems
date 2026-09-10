#include <iostream>
#include <fstream>

using namespace std;
const int NR=41;
int x[NR],k,n,a,b,i;
ifstream f("partitiinumar3.in");
ofstream g("partitiinumar3.out");
void init(int k)
{
    x[k]=a-1;
}
int succesor(int k)
{
    if ( x[k]<=b )
        return 1;
    else
        return 0;
}
int continuare(int k)
{
    int s=0;
    if(x[k]>b)
        return 0;
    for(i=1;i<k;i++)
        if(x[k]<x[i])
            return 0;
    for(i=1;i<k;i++)
        s+=x[i];
    if(s<n)
        return 1;
    else
        return 0;
}
int solutie(int k)
{
    int s=0;
    for(i=1;i<k;i++)
        s+=x[i];
    if(s==n)
        return 1;
    else
        return 0;
}
void afisare()
{
    int i;
    for(i=1;i<k;i++)
        g<<x[i]<<' ';
    g<<'\n';
}
void backtracking()
{
    k=1;
    init(1);
    while (k!=0)
    {
        if (solutie(k))
        {
            afisare();
            k--;
        }
        else
            if (succesor(k))
            {
                x[k]++;
                if (continuare(k))
                    k++;
            }
            else
            {
                init(k);
                k--;
            }
    }
}
int main()
{
 f>>n>>a>>b;
 backtracking();
 return 0;
}