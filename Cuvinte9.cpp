#include <iostream>
#include <cstring>

using namespace std;

char s[101];

bool cifra(char ch)
{
    return ch >= '0' && ch <= '9';
}

int nr(int& i)
{
    long long int nr = 0;
    while(cifra(s[i]))
        nr = nr * 10 + s[i] - '0' , i++;
    return nr;
}

int main()
{
    cin.getline(s , 101);
    int i = 0;
    long long int num = -1;
    char ma = '0';
    while(s[i]!='\0')
    {
        if(cifra(s[i]))
        {
            if(s[i] >= ma)
                ma=s[i] , num = nr(i);
            int numar = nr(i);
        }
        i++;
    }
    if(num != -1)
        cout << num;
    else
        cout << "nu exista";
    return 0;
}