#include<cmath>
#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("puteri6.in");
ofstream fout("puteri6.out");
int n,i,fr[10],x,p;
int main()
{ fin>>n;
while(fin>>x)
{
    p=log10(x);
    fr[p]++;
}
int s=0;
for(i=0;i<=9;i++)
{
    s=s+fr[i];
    if(s>=n)
    {
        fout<<pow(10,i);
        return 0;
    }
}
  fout<<"Nu exista";

}