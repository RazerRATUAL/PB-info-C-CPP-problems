#include <iostream>
using namespace std;

const int dim = 101;
int a[dim][dim];

int main()
{
    int n , m, cnt = 0 , nr = 0;
    cin >> n >> m;

    for(int i = 0 ; i < n ; ++i)
        for(int j= 0; j < m; ++j)  
        cin >> a[i][j];
    for(int i = 0 ;i < n ; ++i){
        cnt = 0;
        for(int j = 1; j < m; ++j){
            if(a[i][j] == a[i][0]) 
                cnt++;
        }
        if(cnt == m - 1) 
            nr++;
    }
    cout << nr;
    return 0;
}