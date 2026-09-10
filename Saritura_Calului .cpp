#include <iostream>
using namespace std;

int n , m , is , js , ib , jb , a[7][7] , cnt;

const int dic[] = {-2 , -1 , 1 , 2 ,  2 ,  1 , -1 , -2};
const int djc[] = { 1 ,  2 , 2 , 1 , -1 , -2 , -2 , -1};

int inside(int i , int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}

void afis()
{
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}

void back(int i , int j , int pas)
{
    for(int d = 0 ; d < 8 ; d++)
    {
        int inou = i + dic[d];
        int jnou = j + djc[d];
        if(inside(inou , jnou) && a[inou][jnou] == 0)
        {
            a[inou][jnou] = pas;
            if(pas == n * m) 
            {
                afis();
                exit(0);
            }
            else back(inou , jnou , pas + 1);
            a[inou][jnou] = 0;
        }
    }
}
int main()
{
    cin >> n >> m;
    cin >> is >> js;
    a[is][js] = 1;
    back(is , js , 2);
    return 0;
}