#include<fstream>
using namespace std;

ifstream fin("siruri.in");
ofstream fout("siruri.out");

int x[20],n,m;

void Read()
{
    fin>>n>>m;
}

void Display()
{
    int i;
    for(i=1;i<=m;i++)
        fout<<x[i]<<" ";
    fout<<'\n';
}

int Valid(int k)
{
    int i;
    for(i=1;i<k;i++)
    {
        if(x[i]>=x[k])
            return 0;
        if(x[i+1]-x[i]>2)
            return 0;
    }
    return 1;
}

void Backtracking(int k)
{
    if(k>m)
        Display();
    else
    {
        int i;
        for(i=1;i<=n;i++)
        {
            x[k]=i;
            if(Valid(k))
                Backtracking(k+1);
        }
    }
}

int main()
{
    Read();
    Backtracking(1);
}