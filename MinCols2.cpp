#include <iostream>

using namespace std;
#define MAX 1000000001
int main()
{
    int n, m;
    cin >> n >> m;
    int a[100][100];
    int mini = MAX;
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] < mini) mini=a[i][j];
        }
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
                int s = MAX;
                for(int k = 0 ; k < n ; ++k)
                {
                    if(a[k][j]<s)
                    s=a[k][j];
                }
            if(s == mini) cout << mini <<" ";
            else cout << a[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}
