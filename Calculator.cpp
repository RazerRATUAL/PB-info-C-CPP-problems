#include <iostream>
using namespace std;

int main()
{
    int A, B, R;
    char X = '+';
    cin>> A >> B;
    if(A < B)
    {
        swap(A, B);
    }
    cin>>X;
        if(X == '+')
            R=A+B;
        else if(X == '-')
            R = A-B;
        else if(X == '*')
            R = A * B;
        else
            R = A / B;
        cout << R;

        return 0;
}
