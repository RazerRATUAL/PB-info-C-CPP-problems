#include<iostream>
using namespace std;

void Citire(int& , int& , int a[][101]);
void Afisare( int , int , int a[][101]);
void Minim(int n, int m, int a[][101],
           int&, int& );
void Maxim(int n, int m, int a[][101],
            int &l, int &c);
void StergeL(int& n, int m, int a[][101], int l);
void StergeC(int n, int& m, int a[][101], int c);

int main()
{
    int n, m, a[101][101], lm, cm, lM, cM;
    Citire(n, m,a);
    Minim(n, m, a, lm, cm);
    Maxim(n, m, a, lM, cM);
  //  cout << lm << " " << lM << "\n";
    //cout << cm << " " << cM << "\n";
    if(lm == lM) StergeL(n, m, a, lm);
    else
    if(lm < lM)
    {
        StergeL(n, m, a, lM);
        StergeL(n, m, a, lm);
    }
    else
    {
        StergeL(n, m, a, lm);
        StergeL(n, m, a, lM);
    }

    if(cm == cM)StergeC(n, m, a, cm);
    else
    if(cm < cM)
    {
        StergeC(n, m, a, cM);
        StergeC(n, m, a, cm);
    }
    else
    {
        StergeC(n, m, a, cm);
        StergeC(n, m, a, cM);
    }


    Afisare(n, m, a);
    return 0;
}

void Citire(int& n, int& m, int a[][101])
{
    cin >> n >> m;
    for(int i = 1; i<= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];
}
void Afisare( int n, int m, int a[][101])
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }

}

void Minim(int n, int m, int a[][101], int& l, int& c)
{
    int minim = a[1][1];
    l = 1, c = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if( a[i][j] < minim)
            {
                minim = a[i][j];
                l = i;
                c = j;
            }
}
void Maxim(int n, int m, int a[][101], int& l, int& c)
{
    int maxim = a[1][1];
    l = 1, c = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if( a[i][j] > maxim)
            {
                maxim = a[i][j];
                l = i;
                c = j;
            }
}
void StergeL(int& n, int m, int a[][101], int l)
{
    for(int i = l; i < n; ++i)
        for(int j = 1; j <= m; j++)
            a[i][j] = a[i+1][j];
    n--;
}
void StergeC(int n, int& m, int a[][101], int c)
 {
     for(int j = c; j < m; ++j)
        for(int i = 1; i <= n; i++)
            a[i][j] = a[i][j+1];
    m--;
}





