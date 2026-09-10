#include <iostream>
using namespace std;

char s[100001];

int main()
{
    char t[] = "adobe";
    int w[6] = {0};
    cin >> s;
    int k = 0;

    for(int i = 0; s[i]; ++i)
        if( s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;

    for(int i = 0; s[i + 4]; ++i)
    {
        w[0] = w[1] = w[2] = w[3] = w[4] = 0;
        for( int j = i; j < i + 5; ++j)
        {
            if( s[j] == 'a')
                if( w[0] == 0)
                    w[0] = 1;

            if( s[j] == 'd')
                if(w[1] == 0)
                    w[1] = 1;

            if( s[j] == 'o')
                if( w[2] == 0)
                    w[2] = 1;

            if( s[j] == 'b')
                if( w[3] == 0)
                    w[3] = 1;

            if( s[j] == 'e')
                if( w[4] == 0)
                    w[4] = 1;

        }

        for( int j = i; j < i + 5; ++j)
        {
            if( s[j] == '+')
                if( w[1] == 0)
                    w[1] = 1;
                else
                    if( w[3] == 0)
                        w[3] = 1;
                    else break;
            if( s[j] == '-')
                if( w[0] == 0)
                    w[0] = 1;
                else
                    if( w[2] == 0)
                        w[2] = 1;
                    else
                        if( w[4] == 0)
                            w[4] = 1;
                        else break;

        }

        for( int j = i; j < i + 5; ++j)
        {
             if( s[j] == '*')
                if( w[0] == 0)
                    w[0] = 1;
                else
                    if( w[1] == 0)
                        w[1] = 1;
                    else
                        if( w[2] == 0)
                            w[2] = 1;
                    else
                        if( w[3] == 0)
                            w[3] = 1;
                        else
                            if( w[4] == 0)
                                w[4] = 1;
                            else break;
        }

        if( w[0] == 1 && w[1] == 1 && w[2] == 1 && w[3] == 1 && w[4] == 1)
            ++k;
    }

    cout << k;
}