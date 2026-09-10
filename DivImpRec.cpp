#include <iostream>
using namespace std;

int DivImpRec(int n);
int main()
{
    int n;
    cin >> n;

    cout << DivImpRec(n);
}

int DivImpRec(int n)
{
   if(n % 2 != 0) return n;
       return DivImpRec(n / 2);
}