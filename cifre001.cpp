#include <iostream>

using namespace std;
int x, y, k;
int main()
{
    cin >>x >>y;
    do
    {
        if(x % 10 == y % 10)
            k++;
        x /= 10;
        y /= 10;
    }while(x != 0 && y != 0);
    if(x > 0 || y > 0)
        cout <<"NU";
    else cout <<"DA" << endl<< k;
    return 0;
}