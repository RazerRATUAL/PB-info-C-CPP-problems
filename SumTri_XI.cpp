#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("sumtri_xi.in");
ofstream cout("sumtri_xi.out");

const int Dim = 101;
int n;
int a[Dim][Dim];
int sum[Dim][Dim];
int sum_max = -100001;

void ReadData();
void Dinamica();
void DisplayData();

int main()
{
    ReadData();
    Dinamica();

    cout << sum_max;

    cin.close();
    cout.close();
    return 0;
}

void ReadData()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
            cin >> a[i][j];
}

void Dinamica()
{
    for(int i = n; i; --i)
        for(int j = i; j; --j)
        {
            if (i == j) 
                sum[i][j] = a[i][j] + sum[i + 1][j + 1];
            else if (i == n) 
                sum[i][j] = a[i][j] + sum[i][j + 1];
            else   
                sum[i][j] = a[i][j] + max(sum[i][j + 1], sum[i + 1][j + 1]);
        }

    for(int i = 1; i <= n; ++i)
        sum_max = max(sum_max, sum[i][1]);
}