#include <iostream>

using namespace std;

int n, x[5000];
unsigned long long rez=1;

typedef int NrMare[1010];

void ProdusMic(NrMare x, int n)
{
  int i,t=0;
  for(i=1;i<=x[0];i++,t/=10)
  {
    t+=x[i]*n;
    x[i]=t%10;
  }
  for(;t;t/=10)
    x[++x[0]]=t%10;
}

int main()
{
    cin >> n;
    if (n<10)
    {
        for (int i=1; i<=n*(n-1)/2; i++)
        {
            rez*=3;
        }
        cout << rez;
    }
    else
    {
        x[1]=3;
        x[0]=1;
        for (int i=2; i<=n*(n-1)/2; i++)
        {
            ProdusMic(x, 3);
        }
        for (int i=x[0]; i>=1; i--)
            cout << x[i];
    }
    return 0;
}