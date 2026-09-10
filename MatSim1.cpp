#include <iostream>
using namespace std;
int m[101][101];

int main()
{
    int n;
    cin >>n;
    for(int i = 1;i <= n; i++)
        for(int j = n;j >= 1; j--) 
            cin>>m[i][j];
    for(int j = 1;j <= n; j++)
        {
            for(int i = n;i >= 1; i--) 
                cout << m[i][j] <<" ";
            cout << endl;
        }
    return 0;
}