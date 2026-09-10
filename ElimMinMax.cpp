#include <iostream>

using namespace std;
int main()
{
    int n , m , a[101][101] , min=10000000 , max = 0 , lmin , lmax , cmin , cmax;
    cin >> n >> m;
    for(int i = 0 ; i < n; ++i)
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
            if(a[i][j]<min)
            {
                min=a[i][j]; 
                lmin = j; 
                cmin = i;
            }

            if(a[i][j]>max)
            {
                max = a[i][j];
                lmax = j; 
                cmax = i;
            }
        }
    for(int i = 0 ; i < n ; ++i)
    {
        int ok = 0;
        for(int j = 0 ; j < m ; ++j)
        {
            if(i!=cmin && i!=cmax && j!=lmin && j!=lmax)
            {
                cout << a[i][j] << ' ';
                ok = 1;
            }
        }
        if(ok == 1)
        cout << endl;
    }
    return 0;
}