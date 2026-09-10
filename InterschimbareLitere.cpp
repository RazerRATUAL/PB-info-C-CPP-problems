#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[20];
    char voc[] = "aeiouAEIOU";
    int pv = - 1, pc = -1;
    cin >> s;
    int l = strlen(s);
    for(int i = 0; i < l; ++i)
        if(strchr(voc, s[i]))
            {
                pv = i;
                break;
            }
    
    for(int i = l - 1; i >= 0; --i)
        if(!strchr(voc, s[i]))
            {
                pc = i;
                break;
            }
    if (pc == -1 || pv == -1)
        cout << "IMPOSIBIL";
    else
    {
        swap(s[pv], s[pc]);
        cout << s;
    }

    return 0;
}