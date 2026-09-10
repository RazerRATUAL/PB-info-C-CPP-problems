#include <iostream>
#include <fstream>

using namespace std;
const int NR=41;
int x[NR],k,n,m,i;
ifstream f("partitiinumar2.in");
ofstream g("partitiinumar2.out");
void init(int k)
{
    x[k]=0;
}
int succesor(int k)
{
    if ( x[k]<n )
        return 1;
    else
        return 0;
}
int continuare(int k)
{
    int s=0;
    for(i=1;i<k;i++)
        if(x[k]==x[i]||x[k]<=x[i])
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
    if(s==n&&k>m)
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
void back()
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
 f>>n>>m;
 back();
 return 0;
}