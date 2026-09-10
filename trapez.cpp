#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c;
    cin >> a >> b >> c;
    float h;
    h=sqrt(c*c-(a-b)*(a-b)/4);
    cout << sqrt(h*h + (a+b)*(a+b)/4);
    return 0;
}
