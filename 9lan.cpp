#include <fstream>

using namespace std;

ifstream cin("9lan.in");
ofstream cout("9lan.out");

int main()
{
    int n;
    cin >> n;
    if(n == 0){
        cout << 1;
        return 0;
    }
    if(n % 2 == 0)
        cout << 1;
    else
        cout << 9;
    return 0;
}
