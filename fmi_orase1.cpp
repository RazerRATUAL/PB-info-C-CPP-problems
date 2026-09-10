#include <fstream>
using namespace std;

ifstream cin("fmi_orase1.in");
ofstream cout("fmi_orase1.out");

int n , maxi , a[101];

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
        cin >> a[i];

    for(int i = 1 ; i <= n ; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(min(a[i] , a[j]) * (j - i) > maxi)
                maxi = min(a[i] , a[j]) * (j - i);
    cout << maxi;
}
