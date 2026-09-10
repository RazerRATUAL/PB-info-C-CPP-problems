#include <iostream>
#include <cstring>

using namespace std;

char sir[256];
int main()
{
    cin.getline(sir, 256);
    int i = 0;
    while (sir[i] != 0)
    {
        if ((i == 0 || sir[i - 1] == ' ') && sir[i] == ' ')
        {
        }
        else
            cout << sir[i];
        ++i;
    }
    return 0;
}